#include <iostream>  
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>


using namespace cv;

int main() {
	// ����һ��ͼƬ����Ϸԭ����    
	Mat img = imread("pic.jpg");
	Mat gimg;
	cvtColor(img, gimg, CV_BGR2GRAY);
	imwrite("Gray_Image.jpg", gimg);
	// ����һ����Ϊ "��Ϸԭ��"����  
	Mat result;
	Canny(img, result, 15, 45);
	imwrite("Res.jpg", result);
	return 0;

}