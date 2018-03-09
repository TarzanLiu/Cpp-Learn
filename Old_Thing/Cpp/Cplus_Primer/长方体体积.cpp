#include<iostream>
using namespace std;

int v(int l, int w = 2, int h = 3);

int main()
{
	const int x = 10, y = 12, z = 15;
	cout << "data is: " << endl;
	cout << v(x, y, z) << endl;
	cout << v(x, y) << endl;
	cout << v(x) << endl;

	system("pause");
	return 0;
}

int v(int l, int w ,int h)
{
	return l*w*h;
}