#include<string>
#include<iostream>

using namespace std;

int main()
{
	//int a=0;
	//++a= 3;
	//cout << a;

	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	size_t z = sizeof(a) / sizeof(*a);
	cout << z;



	system("pause");
	return 0;

}