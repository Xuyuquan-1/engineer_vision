#include <rclcpp/rclcpp.hpp>
#include <image_transport/image_transport.hpp>
#include <sensor_msgs/msg/image.hpp>
#include "camera_interface/msg/corner.hpp"
#include "camera_interface/msg/port.hpp"
// #include "serial_interface/msg/uart.hpp"
#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>

#include <iostream>
#include <memory>
#include <vector>
#include <string>

bool show_flag = 1;

typedef struct Pose{
    float roll;
    float pitch;
    float yaw;
} Pose;

Pose pose;

void solve_pnp(std::vector<double>, std::vector<double>);

    //内参矩阵
    cv::Mat K = (cv::Mat_<double>(3,3)<< 
    2546.371065, 
    0.000000,
    1617.242475,
    0.000000,
    2553.321007,
    1044.974470,
    0.000000,
    0.000000,
    1.000000
    );

    //畸变
    cv::Mat C = (cv::Mat_<double>(5,1)<< 
    -0.068227,
    0.012099,
    0.001153,
    -0.000376,
    0.000000
    );
 

    cv::Mat rvet = (cv::Mat_<double>(3,1) << 0.0, 0.0, 0.0);
    cv::Mat tvet = (cv::Mat_<double>(3,1) << 0.0, 0.0, 0.0);
    cv::Mat rvet_mat = (cv::Mat_<double>(3,3) << 
    0.0, 0.0, 0.0,
    0.0, 0.0, 0.0,
    0.0, 0.0, 0.0
    );
    // cv::Mat rvet;
    // cv::Mat tvet;
    // cv::Mat rvet_mat;
void PoseResolveCallback(const camera_interface::msg::Corner::ConstSharedPtr &msg){
    // std::cout<<"PoseResolveCallback start! !"<<std::endl;
    // rvet.setTo(cv::Scalar(0));
    // tvet.setTo(cv::Scalar(0));
    // rvet_mat = (cv::Mat_<double>(3,3) << 
    // 0.0, 0.0, 0.0,
    // 0.0, 0.0, 0.0,
    // 0.0, 0.0, 0.0
    // );
    rvet.setTo(cv::Scalar(0));
    tvet.setTo(cv::Scalar(0));
    rvet_mat.setTo(cv::Scalar(0));
    show_flag = 0;

    std::vector<double> corner_x = msg->corner_x;
    std::vector<double> corner_y = msg->corner_y;
    

    if(corner_x.size() != 4 || corner_y.size() != 4 || corner_x.empty() || corner_y.empty()){
        rvet.setTo(cv::Scalar(0));
        tvet.setTo(cv::Scalar(0));
        // show_flag = 0;
        return;
    }
    show_flag = 1;
    std::cout<<"I have received:"<<std::endl;
    std::thread s(solve_pnp, corner_x,corner_y);
    s.join();
    // solve_pnp(corner_x, corner_y);
}
void solve_pnp(std::vector<double> corner_x, std::vector<double> corner_y){
    std::cout<<"solve_pnp start! !"<<std::endl;
    //像素坐标->图像坐标(mm)
    // float dx = 2.4/1000;
    // float w0 = 3088/2;
    // float h0 = 2064/2;
    std::vector<cv::Point2f> corner_2d;
    for(int i=0;i<4;i++){
        // corner_2d.push_back({(corner_x[i]*4.0f +2 - w0) *dx, (corner_y[i]*4.0f +2 - h0) *dx});
        float x = (float) corner_x[i] *4.0f ;
        float y = (float) corner_y[i] *4.0f ;
        corner_2d.push_back({x, y});
    }




    std::vector<cv::Point3f> corner_3d;
    //solvepnp默认右手系
    corner_3d.push_back({0.14f, -0.14f, 0.0f});
    corner_3d.push_back({-0.14f, -0.14f, 0.0f});
    corner_3d.push_back({-0.14f, 0.14f, 0.0f});
    corner_3d.push_back({0.14f, 0.14f, 0.0f});

    // corner_3d.push_back({14400, -14400, 0.0});
    // corner_3d.push_back({14400,  14400, 0.0});
    // corner_3d.push_back({-14400, 14400, 0.0});
    // corner_3d.push_back({-14400, -14400, 0.0});

    
    //输出test
    std::cout<<"***************2d"<<std::endl;
    for(int i=0;i<corner_2d.size();i++){
        std::cout<<corner_2d[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"***************3d"<<std::endl;
    for(int i=0;i<corner_3d.size();i++){
        std::cout<<corner_3d[i]<<" ";
    }
    std::cout<<std::endl;

    //外参矩阵psda
    // cv::Mat tvet = (cv::Mat_<double>(3,1) << 0);
    bool pnp_flag = cv::solvePnP(corner_3d, corner_2d, K, C, rvet, tvet, cv::SOLVEPNP_ITERATIVE);
    if(pnp_flag == false){
        std::cout<<"pnp_error!"<<std::endl;
        return;
    }
    //旋转向量->旋转矩阵
    rvet_mat = (cv::Mat_<double>(3,3) << 0);
    cv::Rodrigues(
        rvet,
        rvet_mat
    );

    rvet_mat = rvet_mat.inv();

    std::cout<<"rvet_mat:"<<std::endl;
    for(int i=0;i<rvet_mat.cols;i++){
        for(int j=0;j<rvet_mat.rows;j++){
            std::cout<<rvet_mat.at<double>(i,j)<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;

    std::cout<<"rvec:"<<std::endl;
    for(int i=0;i<rvet.rows;i++){
        std::cout<<rvet.at<double>(i)<<" ";
    }
    std::cout<<std::endl;


    std::cout<<"tvec:"<<std::endl;
    for(int i=0;i<tvet.rows;i++){
        std::cout<<tvet.at<double>(i)<<" ";
    }
    std::cout<<std::endl;

    cv::Mat p_camera = (cv::Mat_<double>(3,1) << 0.0, 0.0, 0.0);
    cv::Mat p_world = (cv::Mat_<double>(3,1) << 0.0, 0.0, 0.0);
    p_world = rvet_mat * p_camera + tvet;

    std::cout<<"p_world:"<<std::endl;
    for(int i=0;i < p_world.rows;i++){
        std::cout<<p_world.at<double>(i)<<" ";
    }
    std::cout<<std::endl;



    // rvet_mat.release();
    p_camera.release();
    p_world.release();

} 

void Eulerangle(){
    // std::cout<<"Eulerangle start! !"<<std::endl;
    if(show_flag == 0){
        return;
    }
    double theta_x = std::atan2(rvet_mat.at<double>(2, 1), rvet_mat.at<double>(2, 2));
    double theta_y = std::atan2(-rvet_mat.at<double>(2, 0), std::sqrt(rvet_mat.at<double>(2, 1) * rvet_mat.at<double>(2, 1) + rvet_mat.at<double>(2, 2) * rvet_mat.at<double>(2, 2)));
    double theta_z = std::atan2(rvet_mat.at<double>(1, 0), rvet_mat.at<double>(0, 0));


    double theta_x_deg = theta_x * 180.0 / CV_PI;
    double theta_y_deg = theta_y * 180.0 / CV_PI;
    double theta_z_deg = theta_z * 180.0 / CV_PI;


    pose.roll = theta_x_deg;
    pose.pitch = theta_y_deg;
    pose.yaw = theta_z_deg;

    std::cout << "Euler angles zyx (in degrees): " << std::endl;
    std::cout << "theta_x: " << theta_x_deg << std::endl;
    std::cout << "theta_y: " << theta_y_deg << std::endl;
    std::cout << "theta_z: " << theta_z_deg << std::endl;
}

void pose_show(){
    // std::cout<<"pose_show start !"<<std::endl;

    if(show_flag == 0){
        return;
    }

    std::vector<cv::Point3f> objpoints;
    objpoints.push_back({0.14f, 0.0f, 0.0f});
    objpoints.push_back({0.0f, 0.14f, 0.0f});
    objpoints.push_back({0.0f, 0.0f, 0.14f});
    objpoints.push_back({0.0f, 0.0f, 0.0f});
    std::vector<cv::Point2f> imgpoints;
    while(1){
        cv::projectPoints(objpoints, rvet, tvet, K, C, imgpoints);

        cv::Mat check_pnp(2064*0.25, 3088*0.25, CV_8UC3, cv::Scalar(0, 0 ,0));
        cv::line(check_pnp, imgpoints[3]*0.25,imgpoints[0]*0.25, cv::Scalar(255,0,0), 2, 8);
        cv::line(check_pnp, imgpoints[3]*0.25,imgpoints[1]*0.25, cv::Scalar(0,255,0), 2, 8);
        cv::line(check_pnp, imgpoints[3]*0.25,imgpoints[2]*0.25, cv::Scalar(0,0,255), 2, 8);

        cv::imshow("check_pnp", check_pnp);
        cv::waitKey(50);
        check_pnp.release();
    }
}

    

class PosePublisher: public rclcpp::Node{
    public:
    PosePublisher(const char* name):Node("name"){
        publisher = this->create_publisher<camera_interface::msg::Port>("port_3d", 10);

        // 创建定时器，500ms为周期，定时发布 
        timer_ = this->create_wall_timer(std::chrono::milliseconds(200), std::bind(&PosePublisher::timer_callback, this));

        subscriber = this->create_subscription<camera_interface::msg::Corner>("corners_2d", 10, std::bind(&PosePublisher::callback, this,std::placeholders::_1));

    }
    private:

    void timer_callback()
    {
        // 日志打印
        // RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());

        camera_interface::msg::Port port;
        port.x = pose.roll;
        port.y = pose.pitch;
        port.z = pose.yaw;

        // 发布消息
        publisher->publish(port);
        std::cout<<"pose.roll: "<<pose.roll<<std::endl;
        std::cout<<"pose.pitch: "<<pose.pitch<<std::endl;
        std::cout<<"pose.yaw: "<<pose.yaw<<std::endl;
        std::cout<<"mseeage has published ！ "<<port.x<<" "<<port.y<<" "<<port.z<<std::endl;
        
    }


    void callback(const camera_interface::msg::Corner::ConstSharedPtr &msg){
        PoseResolveCallback(msg);
        // if(thread_flag == 0){
            std::thread e(Eulerangle);
            std::thread t(pose_show);

            e.join();
            t.detach(); 
        //     thread_flag = 1;
        // }


    }

    rclcpp::Subscription<camera_interface::msg::Corner>::SharedPtr subscriber;

    rclcpp::TimerBase::SharedPtr timer_;

    rclcpp::Publisher<camera_interface::msg::Port>::SharedPtr publisher;

    bool thread_flag = 0;
};


 
int main(int argc, char *argv[]){
    rclcpp::init(argc, argv);
    std::shared_ptr<rclcpp::Node> node = std::make_shared<PosePublisher>("sub_pose"); 


    // std::cout<<"main start! !"<<std::endl;

    rclcpp::spin(node);	
    rclcpp::shutdown();
    return 0;
}