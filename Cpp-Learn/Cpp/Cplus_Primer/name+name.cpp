#include<iostream>
#include<string>

using namespace std;

int main()
{
	string a, b, c;

	cout << "Enter your first name: ";
	cin >> a;
	cout << "Enter your last name: ";
	cin >> b;
	c = b +", "+ a;
	cout << "Here is a single string: " << c << endl;

	system("pause");
	return 0;
}