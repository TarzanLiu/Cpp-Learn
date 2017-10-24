#include<opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main()
{
	Mat r = Mat(10, 3, CV_8UC3);
	randu(r, Scalar::all(0), Scalar::all(255));
	
	cout << "r (opencv) = " << r << ";" << endl << endl;

	cout << "r (python) = " << endl;
	cout<<format(r, Formatter::FMT_PYTHON) << ";" << endl << endl;
	//imshow("r....",r);
	cout << "r (numpy) = " << endl;
	cout << format(r, Formatter::FMT_NUMPY) << ";" << endl << endl;

	system("pause");
	return 0;
}
