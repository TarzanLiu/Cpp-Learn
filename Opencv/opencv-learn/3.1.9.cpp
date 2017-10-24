#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>

using namespace cv;

int main()
{
	Mat girl = imread("girl.jpg");
	namedWindow("【1】动漫画");
	imshow("【1】动漫画", girl);

	Mat image = imread("dota.jpg", 199);
	Mat logo = imread("dota_logo.jpg");

	namedWindow("【2】原画图");
	imshow("【2】原画图", image);

	namedWindow("【3】logo");
	imshow("【3】logo", logo);

	Mat imageROI;

	imageROI = image(Rect(800, 350, logo.cols, logo.rows));

	addWeighted(imageROI, 0.5, logo, 0.3, 0., imageROI);

	namedWindow("【4】原画+logo");
	imshow("【4】原画+logo", image);

	imwrite("由imwrite生成的图片.jpg", image);

	waitKey();

	return 0;
}