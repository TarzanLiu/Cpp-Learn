//VideoCapture.cpp
#include<opencv2\opencv.hpp>
using namespace cv;
int main() {
	VideoCapture capture(1);
	// 设置摄像头的拍摄属性为 分辨率640x480，帧率30fps
	capture.set(CAP_PROP_FRAME_HEIGHT, 1080);
	capture.set(CAP_PROP_FRAME_WIDTH, 1920);
	capture.set(CAP_PROP_FPS, 20.0);
	// 设置保存视频的格式为AVI，编码为MJPG
	VideoWriter writer("test.avi", VideoWriter::fourcc('M', 'J', 'P', 'G'), 20.0, Size(1920, 1080), true);
	Mat videoPlay;
	namedWindow("VideoPlay", WINDOW_NORMAL);
	while (capture.isOpened())
	{
		capture >> videoPlay;
		writer << videoPlay;

		line(videoPlay, cvPoint(960, 515), cvPoint(960, 565), CV_RGB(0, 255, 255), 2, CV_AA, 0);
		line(videoPlay, cvPoint(935, 540), cvPoint(985, 540), CV_RGB(0, 255, 255), 2, CV_AA, 0);

		line(videoPlay, cvPoint(0, 515), cvPoint(0, 565), CV_RGB(0, 255, 255), 2, CV_AA, 0);
		line(videoPlay, cvPoint(0, 540), cvPoint(25,540), CV_RGB(0, 255, 255), 2, CV_AA, 0);

		line(videoPlay, cvPoint(1920, 515), cvPoint(1920, 565), CV_RGB(0, 255, 255), 2, CV_AA, 0);
		line(videoPlay, cvPoint(1895, 540), cvPoint(1920, 540), CV_RGB(0, 255, 255), 2, CV_AA, 0);


		imshow("VideoPlay", videoPlay);

		if (cvWaitKey(20) == 27)
		{
			break;
		}
	}
	return 0;
}