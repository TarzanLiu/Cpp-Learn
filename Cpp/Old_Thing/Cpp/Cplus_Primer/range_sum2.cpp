#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	int sum = 0;
	cout << "Enter Num: ";
	cin >> a;

	if (a == 0)
		return 0;
	else
		for (int i = 0; i <= a; i++)
			sum = sum + i;
	cout << "Sum is: " << sum << endl;
	system("pause");
	return 0;

}