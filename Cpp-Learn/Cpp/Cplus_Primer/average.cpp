#include<iostream>
using namespace std;

double ave(int a, int b);

int main()
{
	int x, y;
	cin >> x >> y;
	while ((x*y)!=0)
	{
		cout << ave(x, y) << endl;
		cin >> x >> y;

	}

	cout << "End" << endl;
	system("pause");
	return 0;
}

double ave(int a, int b)
{
	return 2.0*a*b / (a + b);
}
