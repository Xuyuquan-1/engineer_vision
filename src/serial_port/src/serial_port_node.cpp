#include <serial/serial.h>
#include <rclcpp/rclcpp.hpp>
#include "camera_interface/msg/port.hpp"
#include <functional>
#include <iostream>

typedef struct{
        uint8_t header = 0xA6;
        uint8_t data[4] = {0x00, 0x00, 0x00, 0x00};
} SendData;

// uint8_t data[2] = {0xA6, 0x11};
float f;

class SerialPortSubscribe: public rclcpp::Node{
    public:
    SerialPortSubscribe(const char* name):Node("serial_port_node"){
        subscriber = this->create_subscription<camera_interface::msg::Port>("port_3d", 10, std::bind(&SerialPortSubscribe::callback, this, std::placeholders::_1));

        serialport.setPort("/dev/ttyACM0");
        serialport.setBaudrate(115200);
        serial::Timeout _time = serial::Timeout::simpleTimeout(2000);
        serialport.setTimeout(_time);
        serialport.open();

        if(serialport.isOpen()){
        std::cout<<"serial port is open"<<std::endl;
        }
        else{
        std::cout<<"serial port error"<<std::endl;
        }
    }
    private:
    void callback(const camera_interface::msg::Port::SharedPtr msg){
        f = msg->z;
        std::cout<<"I Have Received_f: "<<f<<std::endl;

        f = f*M_PI/180;

        if(f>M_PI/2){
                f -= M_PI/2;
        }
        else if(f<-M_PI/2){
                f += M_PI/2;
        }
        else{
                ;
        }
        std::cout<<"f_PI:"<<f<<std::endl;

        uint32_t x_32 = 0;
        x_32 = 0;
        //data
        f = f*1000000; 

        
        x_32 = static_cast<uint32_t>(f);

        senddata.data[0] = x_32;
        senddata.data[1] = x_32 >> 8;
        senddata.data[2] = x_32 >> 16;
        senddata.data[3] = x_32 >> 24;

        std::cout << "header:" << std::hex << static_cast<int>(senddata.header) << std::endl;

        std::cout << "x:" <<senddata.data[0]<< senddata.data[1]<< senddata.data[2]<< senddata.data[3] << std::endl;
        serialport.write(reinterpret_cast<uint8_t*>(&senddata) , sizeof(senddata));
        // serialport.write(data, sizeof(data));


        // std::cout<<"data:"<<data[0]<<std::endl;


        // uint8_t receivedata[10] = {0};
        // serialport.read(receivedata, sizeof(receivedata));
        // std::cout<<"receivedata"<<receivedata<<std::endl;


        // std::string result = serialport.readline();
        // RCLCPP_INFO(node->get_logger(), "Received data: %s", result.c_str());
        // // 可以将接收到的数据进行进一步处理，如发布到话题等
        std::this_thread::sleep_for(std::chrono::milliseconds(100));


    }
        SendData senddata;
        serial::Serial serialport;
    rclcpp::Subscription<camera_interface::msg::Port>::SharedPtr subscriber;
};

int main(int argc, char* argv[]){

        rclcpp::init(argc, argv);
        std::shared_ptr<rclcpp::Node> node = std::make_shared<SerialPortSubscribe>("serial_port_node");

        rclcpp::spin(node);
        
        rclcpp::shutdown();


 

        return 0;
}