#include<iostream>
using namespace std;

int main()
{
	const float inch2m = 0.0254;
	const float pound2kg = 1.0 / 2.2;

	int h;
	int w;
	float bmi;
	cout << "Enter your height: ";
	cin >> h;
	cout << "Enter your weight: ";
	cin >> w;

	bmi = (w*inch2m) / ((h*pound2kg)*(h*pound2kg));

	cout << "You BMI is: " << bmi << endl;

	system("pause");
	return 0;
}