#include <iostream>
#include <string>

#include <opencv2/opencv.hpp>

#include <rclcpp/rclcpp.hpp>

int main(int argc, char *argv[]){
        std::string str = "../../sources/bgr_images/";
        str = str + argv[1];
        std::cout<<str<<std::endl;
        cv::Mat img = cv::imread(str);
        
        cv::cvtColor(img, img, cv::COLOR_BGR2GRAY);
        std::string path = "../../sources/gray_images/";
        path = path + argv[1];
        
        cv::imwrite(path, img);
        cv::imshow("image", img);
        cv::waitKey(0);
        return 0;
}