#include<opencv2/opencv.hpp>
#include<opencv2\highgui\highgui.hpp>

using namespace cv;

void main()
{
	Mat dstImage,srcImage = imread("E:\\_Code\\_img\\1.jpg");
	cvtColor(srcImage, dstImage, COLOR_BGR2Lab);
	imshow("xiaoguotu", dstImage);

	waitKey();

}
