#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

int main(int argc, char **argv)
{
    cv::Mat img = cv::Mat::zeros(512, 512, CV_8UC3);
    cv::circle(img, cv::Point(256, 256), 50, cv::Scalar(0, 255, 0), 3);
    
    cv::namedWindow("hello opencv");
    cv::imshow("hello opencv", img);
    cv::waitKey();

    return 0;
}