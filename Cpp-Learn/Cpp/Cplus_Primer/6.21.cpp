#include<iostream>
#include<string>

using namespace std;

void than(int a, int *b)
{
	a > *b ? cout << a : cout << *b;
	cout << endl;
}

int main()
{
	int a;
	int b;

	cin >> a;
	cin >> b;
	than(a, &b);


	system("pause");
	return 0;

}