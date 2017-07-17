#include<iostream>
using namespace std;

float c2f(int c);

int main()
{
	int c;
	cout << "Please enter a Celsius value: ";
	cin >> c;
	cout << c << " degree Celsius is " << c2f(c) << " degrees Fahrenheit" << endl;
	system("pause");
	return 0;
}

float c2f(int c)
{
	return 1.8*c + 32.0;
}