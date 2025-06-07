#include <rclcpp/rclcpp.hpp>
#include <image_transport/image_transport.hpp>
#include <sensor_msgs/msg/image.hpp>


#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>


#include <iostream>
#include <memory>
#include <thread>
#include <vector>
#include <string>
// namespace mindvision_camera{
// }
void myHarris(cv::Mat& image){


    cv::Mat gray;
    cv::cvtColor(image, gray, cv::COLOR_BGR2GRAY);

    // cv::imshow("test", gray);
    // cv::waitKey(1);

    cv::Mat cornerStrenth;
    cv::cornerHarris(gray, cornerStrenth, 2, 3, 0.04);

    cv::Mat harrisn;
    cv::normalize(cornerStrenth, harrisn, 0, 255, cv::NORM_MINMAX);
    cv::convertScaleAbs(harrisn, harrisn);

    std::vector<cv::KeyPoint> keypoints;
    for(int row = 0; row < harrisn.rows; row++){
        for(int col = 0; col < harrisn.cols; col++){
            int R = harrisn.at<uchar>(row, col);
            if(R > 150){ 
                cv::KeyPoint keypoint;
                keypoint.pt.y = row;
                keypoint.pt.x = col;
                keypoints.push_back(keypoint);
            }
        }
    }

    cv::drawKeypoints(image, keypoints, image);
    cv::imshow("view", harrisn);
    cv::imshow("image", image);
    cv::waitKey(1);
    
}

void ImageDisplayCallback(const sensor_msgs::msg::Image::ConstSharedPtr &msg)
{
    cv::Mat img = cv_bridge::toCvShare(msg, "bgr8")->image;
    cv::resize(img, img, cv::Size(), 0.25, 0.25);
    myHarris(img);

}


int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::NodeOptions options;
    rclcpp::Node::SharedPtr node = rclcpp::Node::make_shared("listener", options);

    image_transport::ImageTransport it(node);
    image_transport::Subscriber sub = it.subscribe("image_raw",1, ImageDisplayCallback);
    rclcpp::spin(node);
    return 0;
}


