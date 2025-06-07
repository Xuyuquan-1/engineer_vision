#include <iostream>
#include <rclcpp/rclcpp.hpp>
#include <opencv2/opencv.hpp>
#include <memory>

int main(){
        cv::Mat image = cv::imread("/home/xyq/T-DT-2024-Radar/config/RM2024.png");
        cv::imshow("111",image);
        cv::waitKey(0);
        std::cout<<image.cols<<" "<<image.rows<<std::endl;
        return 0;
}