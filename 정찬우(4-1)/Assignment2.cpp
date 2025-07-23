#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;

int main() {

    Mat blueImage(480,640, CV_8UC3, cv::Scalar(255, 0, 0));

    imshow("blue_image",blueImage);
    waitKey(0);

    return 0;
}