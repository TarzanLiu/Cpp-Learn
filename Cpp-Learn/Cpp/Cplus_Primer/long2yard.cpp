#include<iostream>
using namespace std;

int main()
{
	int x;
	double y;
	cout << "Enter the long: ";
	cin >> x;
	y = x / 220.0;
	cout << x << " longs = " << y << " yards" << endl;

	system("pause");
	return 0;
}