#include<opencv2/opencv.hpp>
using namespace cv;

void main()
{
	Mat srcImage = imread("E:\\_Code\\_img\\1.jpg");
	imshow("��ԭʼͼ��", srcImage);				
	waitKey(0);
}