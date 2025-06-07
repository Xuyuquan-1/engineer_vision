
#include <rclcpp/rclcpp.hpp>
#include <image_transport/image_transport.hpp>
#include <sensor_msgs/msg/image.hpp>
#include "camera_interface/msg/corner.hpp"
#include <std_msgs/msg/string.hpp>

#include<opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>


#include<iostream>
#include <memory>
#include <thread>
#include <vector>
#include <string>

using namespace cv;
using namespace std;
// int thresh = 100;
// RNG rng(12345);
Mat img_gray;
bool frame_flag = 0;
std::vector<cv::Mat> frame_corner_buffer;

void thresh_callback(int, void* );

double angleBetweenLines(const cv::Vec4i& line1, const cv::Vec4i& line2) {
    cv::Point2f p11(line1[0], line1[1]);
    cv::Point2f p12(line1[2], line1[3]);
    cv::Point2f p21(line2[0], line2[1]);
    cv::Point2f p22(line2[2], line2[3]);

    cv::Point2f v1 = p12 - p11;
    cv::Point2f v2 = p22 - p21;

    // 计算向量的点积
    double dotProduct = v1.dot(v2);
    // 计算向量的模
    double v1Magnitude = cv::norm(v1);
    double v2Magnitude = cv::norm(v2);

    // 避免除零错误
    if (v1Magnitude == 0 || v2Magnitude == 0) {
        return 0;
    }

    // 计算夹角的余弦值
    double cosTheta = dotProduct / (v1Magnitude * v2Magnitude);
    // 限制 cosTheta 的范围在 [-1, 1] 之间，避免计算 acos 时出现错误
    cosTheta = std::max(-1.0, std::min(1.0, cosTheta));
    // 计算夹角（弧度）
    double angleInRadians = std::acos(cosTheta);
    // 转换为角度
    double angleInDegrees = angleInRadians * 180.0 / CV_PI;
    return angleInDegrees;
}


bool FitterJudgement(std::vector<cv::Mat> ths){
        if(ths.size()!=4)
                return false;

        //判断是否有相同的点被跟踪
        for(int i=0;i<ths.size();i++){
                if(ths[i%ths.size()].at<Vec2i>(0) == ths[(i+1)%ths.size()].at<Vec2i>(0)){
                        return false;
                }
        }
        cv::Vec4i temp_point1;
        temp_point1[0] = ths[0].at<Vec2i>(0)[0];
        temp_point1[1] = ths[0].at<Vec2i>(0)[1];
        temp_point1[2] = ths[1].at<Vec2i>(0)[0];
        temp_point1[3] = ths[1].at<Vec2i>(0)[1];

        cv::Vec4i temp_point2;
        temp_point2[0] = ths[1].at<Vec2i>(0)[0];
        temp_point2[1] = ths[1].at<Vec2i>(0)[1];
        temp_point2[2] = ths[2].at<Vec2i>(0)[0];
        temp_point2[3] = ths[2].at<Vec2i>(0)[1];

        cv::Vec4i temp_point3;
        temp_point3[0] = ths[2].at<Vec2i>(0)[0];
        temp_point3[1] = ths[2].at<Vec2i>(0)[1];
        temp_point3[2] = ths[3].at<Vec2i>(0)[0];
        temp_point3[3] = ths[3].at<Vec2i>(0)[1];

        cv::Vec4i temp_point4;
        temp_point4[0] = ths[3].at<Vec2i>(0)[0];
        temp_point4[1] = ths[3].at<Vec2i>(0)[1];
        temp_point4[2] = ths[0].at<Vec2i>(0)[0];
        temp_point4[3] = ths[0].at<Vec2i>(0)[1];

        if(angleBetweenLines(temp_point1, temp_point2) < 60 || 
        angleBetweenLines(temp_point1, temp_point2) > 120){
                std::cout<<"角度不匹配！"<<std::endl;
                return false;
        }
        if(angleBetweenLines(temp_point2, temp_point3) < 60 || 
        angleBetweenLines(temp_point2, temp_point3) > 120){
                std::cout<<"角度不匹配！"<<std::endl;
                return false;
        }
        if(angleBetweenLines(temp_point3, temp_point4) < 60 || 
        angleBetweenLines(temp_point3, temp_point4) > 120){
                std::cout<<"角度不匹配！"<<std::endl;
                return false;
        }
        if(angleBetweenLines(temp_point4, temp_point1) < 60 || 
        angleBetweenLines(temp_point4, temp_point1) > 120){
                std::cout<<"角度不匹配！"<<std::endl;
                return false;
        }
        return true;
}


//距离最远的设置为第一位
void thpoint_sort(cv::Mat &th, cv::Point &center_point){
        int th_flag = 0;
        int th_max = 0;
        int th_min = 5172;
        for(int i=0;i<3;i++)
        {
                //与中心点的距离
                if(pow(th.at<Vec2i>(i)[0]-center_point.x,2)+pow(th.at<Vec2i>(i)[1]-center_point.y,2) > th_max){
                        th_flag = i;
                        th_max = pow(th.at<Vec2i>(i)[0]-center_point.x,2)+pow(th.at<Vec2i>(i)[1]-center_point.y,2);
                }
        }
        swap(th.at<Vec2i>(0),th.at<Vec2i>(th_flag));
}

class CornerPublisher : public rclcpp::Node{

        public:

        CornerPublisher(std::string name): Node(name){
                //清空成员变量
                std::vector<double>().swap(this->corner_x);
                std::vector<double>().swap(this->corner_y);
                publisher = this->create_publisher<camera_interface::msg::Corner>("corners_2d", 10);
        }

        void PublishCorner2D(const std::vector<cv::Point> &corners_2d){
                for(int i=0;i<corners_2d.size();i++){
                        corner_x.push_back(corners_2d[i].x);
                        corner_y.push_back(corners_2d[i].y);
                }
                camera_interface::msg::Corner msg;
                msg.corner_x = this->corner_x;
                msg.corner_y = this->corner_y;
                publisher->publish(msg);
        }

        std::vector<double> GetCornerX(){
                if(!corner_x.empty()){
                        return corner_x;
                }
                std::cout<<"cornerx为空!"<<std::endl;
                return corner_x;
        }

        std::vector<double> GetCornerY(){
                if(!corner_y.empty()){
                        return corner_y;
                }
                std::cout<<"cornery为空!"<<std::endl;       
                return corner_x;
        }

        private:

        std::vector<double> corner_x;
        std::vector<double> corner_y;
        rclcpp::Publisher<camera_interface::msg::Corner>::SharedPtr publisher;
};




std::vector<cv::Point> CornerDetect(Mat& img_red){
        // cv::Mat img_red = cv::imread("../../sources/images/red.jpg");
        // cv::resize(img_red, img_red, cv::Size(), 0.25, 0.25);

        //显示原始图像
        // cv::imshow("red",img_red);

        std::vector<cv::Mat> BGR;
        cv::split(img_red, BGR);
        cv::Mat red_channel = BGR[2];
        cv::Mat blue_channel = BGR[0];
        cv::Mat red_blue_channel = red_channel - blue_channel;
        // cv::imshow("red_blue_channel", red_blue_channel);
        waitKey(1);     
        //显示红色通道
        cv::imshow("red_channel",red_channel);

        cv::threshold(red_channel, img_gray, 225, 255, THRESH_BINARY);
        // 定义结构元素（内核）
        // 这里我们使用一个5x5的矩形内核
        Mat element_open = getStructuringElement(MORPH_RECT, Size(3, 3));
        Mat element_boom = getStructuringElement(MORPH_ELLIPSE, Size(3, 3));
        // 执行闭运算
        cv::morphologyEx(img_gray, img_gray, cv::MORPH_CLOSE, element_open);
        cv::morphologyEx(img_gray, img_gray, cv::MORPH_CLOSE, element_open);
        // 执行开运算
        morphologyEx(img_gray, img_gray, MORPH_OPEN, element_boom);
        //膨胀操作
        // dilate(img_gray, img_gray, element_boom, cv::Point(), 1);
        // cv::GaussianBlur(img_gray, img_gray, cv::Size(3, 3), 1, 1);
        //平滑滤波
        // blur( img_gray, img_gray, Size(3,3));
        cv::imshow("bin", img_gray);

        //轮廓检测
        vector<vector<Point>> contours;
        vector<Vec4i> hierarchy;
        // 只查找最外层
        cv::findContours(img_gray, contours ,hierarchy, cv::RETR_EXTERNAL, CHAIN_APPROX_SIMPLE, Point());

        float img_area = img_red.cols*img_red.rows;

        for(int i=0;i<(int)contours.size();i++){
                double areal = cv::contourArea(contours[i]);
                if(areal < img_area*0.0003 || areal > img_area*0.025){
                        contours.erase(contours.begin()+i);
                        i--;
                        continue;
                }
        }

        for(int i=0;i<(int)contours.size();i++){
                // cout<<contours[i]<<endl;
        }
        // 多边形拟合
        std::vector<cv::Mat> mul_polys;
        Mat img_polys;
        img_red.copyTo(img_polys);
        
        
        // if((int)contours.size()!= 4){
        //         std::cerr<<"出现无效轮廓！|| 视野内角点数量不足！:"<<contours.size()<<std::endl;
        // }


        for(int i=0; i<(int)contours.size(); i++){
                // std::vector<cv::Point> mul_poly;
                cv::Mat mul_poly;
                double len = cv::arcLength(contours[i], true);
                approxPolyDP(contours[i], mul_poly, len*0.115, true);
                mul_polys.push_back(mul_poly);

                //拟合多边形不是三角形
                if(mul_poly.rows != 3){
                        std::cout<<"出现无效多边形，无效多边形边数："<<mul_poly.rows<<std::endl;
                        contours.erase(contours.begin()+i);
                        mul_polys.erase(mul_polys.end());
                        i--;
                        continue;
                }

                //画拟合多边形
                cout<<"poly:"<<mul_poly.rows<<endl;
                for(int j=0;j<mul_poly.rows;j++){
                        if(j == mul_poly.rows-1){
                                Vec2i point1 = mul_poly.at<Vec2i>(j);
                                Vec2i point2 = mul_poly.at<Vec2i>(0);
                                line(img_polys, point1, point2, Scalar(255, 0, 0), 2, 8, 0);
                                continue;

                        }
                        Vec2i point1 = mul_poly.at<Vec2i>(j);
                        Vec2i point2 = mul_poly.at<Vec2i>(j+1);
                        line(img_polys, point1, point2, Scalar(255, 0, 0), 2, 8, 0);
                }
        }

        // for(int i=0;i<mul_polys.size();i++){
        //         float percent_area = mul_polys[i].at<Vec2i>(0)[0] * mul_polys[i].at<Vec2i>(0)[1]/img_area;
        //         printf("area_%d: %.2f\n", i, percent_area);
        // }

        //储存最终四角点
        std::vector<cv::Point> final_corner;

        if(mul_polys.size() != 4 ){
                // std::cout<<"有效角点不足四个"<<std::endl;
                frame_flag = 0;
                // return std::vector<cv::Point>();
                // return std::vector<cv::Point>();
        }

        else{

                cv::Point center_point = {(mul_polys[0].at<Vec2i>(0)[0]+mul_polys[1].at<Vec2i>(0)[0]+mul_polys[2].at<Vec2i>(0)[0]+mul_polys[3].at<Vec2i>(0)[0])/4, 
                                        (mul_polys[0].at<Vec2i>(0)[1]+mul_polys[1].at<Vec2i>(0)[1]+mul_polys[2].at<Vec2i>(0)[1]+mul_polys[3].at<Vec2i>(0)[1])/4}; 

                std::cout<<"center_point"<<center_point<<std::endl;
                for(int i=0;i<mul_polys.size();i++){
                        thpoint_sort(mul_polys[i], center_point);
                }
                // // 2.极坐标
                if(frame_flag == 0){
                       for(int i=0;i<mul_polys.size()-1;i++){
                                for(int j=0;j<mul_polys.size()-1;j++){
                                        if(atan2(mul_polys[j].at<Vec2i>(0)[1]-center_point.y, mul_polys[j].at<Vec2i>(0)[0]-center_point.x)>
                                        atan2(mul_polys[j+1].at<Vec2i>(0)[1]-center_point.y, mul_polys[j+1].at<Vec2i>(0)[0]-center_point.x)){
                                                swap(mul_polys[j], mul_polys[j+1]);
                                        }
                                }
                       }
                }
                
                //近似中心点
                //排序每个角点三角形的顶点顺序



                //首次：排序后判断轮廓大小，使得最小角点为第一位
                //后续：跟踪前一帧的角点
                //TODO：丢失角点时重置frame_flag
                if(frame_flag == 0){
                        double min_area = cv::contourArea(mul_polys[0], true);
                        double min_area_flag = 0;
                        for(int i=0;i<mul_polys.size();i++){
                        if(cv::contourArea(mul_polys[i], true) < min_area){
                                        min_area = cv::contourArea(mul_polys[i], true);
                                        min_area_flag = i;
                        }

                        }

                        for(int i=0;i<min_area_flag;i++){
                                cv::Mat temp_poly = mul_polys[0];
                                for(int j=0;j<mul_polys.size()-1;j++){
                                mul_polys[j] = mul_polys[j+1];
                                }
                                mul_polys[mul_polys.size()-1] = temp_poly;
                        }
                        frame_corner_buffer = mul_polys;
                        frame_flag = 1;
                }
                else if(frame_flag == 1){
                        // std::cout<<"+++++++++++++++"<<std::endl;
                        int nearest_flag;
                        int nearest;
                        for(int i=0;i<frame_corner_buffer.size();i++){
                                nearest_flag = 0;
                                nearest = 3088*2064;
                                for(int j=0;j<mul_polys.size();j++){
                                        if(pow(mul_polys[j].at<Vec2i>(0)[0] - frame_corner_buffer[i].at<Vec2i>(0)[0], 2) + 
                                        pow(mul_polys[j].at<Vec2i>(0)[1] - frame_corner_buffer[i].at<Vec2i>(0)[1], 2) < nearest){
                                                nearest_flag = j;
                                                nearest = pow(mul_polys[j].at<Vec2i>(0)[0] - frame_corner_buffer[i].at<Vec2i>(0)[0], 2)+
                                                pow(mul_polys[j].at<Vec2i>(0)[1] - frame_corner_buffer[i].at<Vec2i>(0)[1], 2);
                                        }
                                }
                                frame_corner_buffer[i] = mul_polys[nearest_flag];
                        }
                        for(int i=0;i<frame_corner_buffer.size();i++){
                                std::cout<<"frame_corner_buffer*x:"<<frame_corner_buffer[i].at<Vec2i>(0)[0]<<" ";
                                std::cout<<"frame_corner_buffer*y:"<<frame_corner_buffer[i].at<Vec2i>(0)[1]<<std::endl;
                        }
                        mul_polys = frame_corner_buffer;

                }



                //输出拟合多边形的角点信息
                for(int i=0;i<mul_polys.size();i++){
                        std::cout<<"mul_polys:"<<mul_polys[i]<<std::endl;
                }
                //画出三角形四顶点连线
                for(int i=0;i<mul_polys.size();i++){

                        //储存最终角点
                        final_corner.push_back(mul_polys[i].at<Vec2i>(0));
                        if(i == mul_polys.size()-1){
                                Vec2i point1 = mul_polys[i].at<Vec2i>(0);
                                Vec2i point2 = mul_polys[0].at<Vec2i>(0);
                                line(img_polys, point1, point2, Scalar(255, 0, 0), 2, 8, 0);
                                continue;

                        }
                        Vec2i point1 = mul_polys[i].at<Vec2i>(0);
                        Vec2i point2 = mul_polys[i+1].at<Vec2i>(0);
                        line(img_polys, point1, point2, Scalar(255, 0, 0), 2, 8, 0);

                }

        }

        Mat img_contours;
        img_red.copyTo(img_contours);
        //
        cv::drawContours(img_contours, contours, -1, cv::Scalar(0, 255, 0), 2, 8);
        //显示轮廓图像
        // cv::imshow("contours", img_contours);
        cv::imshow("polys", img_polys);

        cv::waitKey(1);


        //释放资源
        img_contours.release();
        img_gray.release();
        img_polys.release();

        if(!FitterJudgement(mul_polys)){
                frame_flag = 0;
                return std::vector<cv::Point>();
        }
        return final_corner;
}


void ImageDisplayCallback(const sensor_msgs::msg::Image::ConstSharedPtr &msg)
{
    cv::Mat img = cv_bridge::toCvShare(msg, "bgr8")->image; 
    cv::resize(img, img, cv::Size(), 0.25, 0.25);
    std::vector<cv::Point> final_corner = CornerDetect(img);
    if(!final_corner.empty())
        std::cout<<"final_corner:"<<final_corner<<std::endl;

    //发布final_corner
    
    //准备指定格式的消息

    //发布
    CornerPublisher corner_pub("corner_publisher");
    corner_pub.PublishCorner2D(final_corner);
    img.release();
}


int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::NodeOptions options;
    rclcpp::Node::SharedPtr node = rclcpp::Node::make_shared("listener", options);

    image_transport::ImageTransport it(node);
    image_transport::Subscriber sub = it.subscribe("image_raw",2, ImageDisplayCallback);
    rclcpp::spin(node);
    return 0;
}


 