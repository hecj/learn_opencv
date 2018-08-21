/*
============================================================================
// Name        : main.cpp
// Author      : hecj
// Description : 矩阵的掩膜操作
获取图像像素指针
掩膜操作解释
代码演示
============================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main(int argc, char** argv) {
	// 加载图像
	Mat src = cv::imread("/Users/hecj/Desktop/test1.jpg");
	if (src.empty()) {
		printf("图片的不存在");
		return -1;
	}
	Mat target ;
	// 颜色转换  COLOR_RGB2GRAY将图像转换成灰色
//	cvtColor(src,target,cv::COLOR_RGB2GRAY);
	// 保存图像
//	imwrite("/Users/hecj/Desktop/test1_convert1.jpg",target);

//	cvtColor(src,target,cv::COLOR_BGR2GRAY);
//	imwrite("/Users/hecj/Desktop/test1_convert2.jpg",target);

	cvtColor(src,target,cv::COLOR_BGR2HSV);
	imwrite("/Users/hecj/Desktop/test1_convert3.jpg",target);

//	namedWindow("test opencv", CV_WINDOW_AUTOSIZE);
//	imshow("test opencv", src);
//	waitKey(0);
	return EXIT_SUCCESS;
}
