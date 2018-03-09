#include<iostream>
using namespace std;

int square(int a, int b)
{
	return a*a + b*b;
}

double square(double a, double b)
{
	return a*a + b*b;
}

int main()
{
	int m, n;
	cout << "Enter two integer:";
	cin >> m >> n;
	cout << "square:" << square(m, n) << endl;

	double x, y;
	cout << "Enter two real numbers:";
	cin>>x>>y;
	cout << "square:" << square(x, y) << endl;

	system("pause");
	return 0;
}