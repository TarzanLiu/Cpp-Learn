#include<iostream>
using namespace	std;

int main()
{
	int x, y, z;
	float h;

	cout << "Enter a latitude in degrees, minute, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> x;
	cout << "Next, enter the minute of arc: ";
	cin >> y;
	cout << "Finally, enter the second of arc: ";
	cin >> z;
	h = x + y / 60.0 + z / 60.0 / 60.0;
	cout << x << " degrees, " << y << " minutes, " << z << " seconds = " << h << " degrees" << endl;

	system("pause");
	return 0;
}