#include<iostream>
using namespace std;

int main()
{
	long long w;
	long long u;
	double a;

	cout << "Enter the world's population: ";
	cin >> w;
	cout << "Enter the population of the US: ";
	cin >> u;
	a = (double)u / w;
  	a = a*100.0;

	cout << "The population of the US is " << a << "%" << " of the world population." << endl;

	system("pause");
	return 0;

}