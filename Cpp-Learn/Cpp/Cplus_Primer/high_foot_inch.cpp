#include<iostream>
using namespace std;

int main()
{
	const float x = 1.0/12.0;
	int inch;
	cout << "Enter your height:______\b\b\b\b\b\b";
	cin >> inch;
	cout << "Your height is: " << inch << " inch, or " << inch*x << " foot." << endl;

	system("pause");
	return 0;
}