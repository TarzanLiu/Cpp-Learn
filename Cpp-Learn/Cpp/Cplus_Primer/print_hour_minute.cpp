#include<iostream>
using namespace std;

void showtime(int h, int m);

int main()
{
	int h, m;
	cout << "Enter the number of hours: ";
	cin >> h;
	cout << "Enter the number of minutes: ";
	cin >> m;
	showtime(h, m);
	system("pause");
	return 0;
}

void showtime(int h, int m)
{
	cout << "Time: " << h << ":" << m << endl;
}