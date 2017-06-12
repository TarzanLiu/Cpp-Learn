#include<iostream>

using namespace std;

void exc(int *a,int *b)
{
	int *x;
	x = a;
	a = b;
	b = x;

	cout << *a << " " << *b << endl;
}


int main()
{

	int m;
	int n;
	cin >> m >> n;

	exc(&m, &n);

	//cout << m << " " << n << endl;

	system("pause");
	return 0;
}