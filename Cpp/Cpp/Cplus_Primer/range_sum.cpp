#include<iostream>
using namespace std;

int main()
{
	int a, b;
	int sum = 0;
	cout << "Left No.: ";
	cin >> a;
	cout << "Right No.:";
	cin >> b;
	for (int i = a; i <= b; i++)
		sum = sum + i;
	cout << "Sum: " << sum << endl;

	system("pause");
	return 0;
}