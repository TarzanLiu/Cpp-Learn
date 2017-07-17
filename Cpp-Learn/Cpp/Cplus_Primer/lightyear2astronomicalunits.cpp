#include<iostream>
using namespace std;

double l2au(float l);

int main()
{
	float l;
	cout << "Enter the number of light years: ";
	cin >> l;
	cout << l << " light years = " << l2au(l) << " astronomical units" << endl;

	system("pause");
	return 0;
}

double l2au(float l)
{
	return l * 63240;
}