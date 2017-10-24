#include<iostream>
using namespace std;

double power(int x, int n)
{
	double v=1.0;
	for (int i = 0; i < n; i++)
		v = v*x;
	return v;
}
int main()
{
	cout << power(5, 56) << endl;
	system("pause");
	return 0;
}