#include <iostream>
#include <math.h>
#include <assert.h>
using namespace std;
const double SMALLFRACTION = 1.0E-8;

double NewtRoot(double x, int n)
{
	double x0, x1, f0, f1;
	assert(x > 0.0);
	x0 = x / 2.0; x1 = x;
	while (fabs(x1 - x0) > SMALLFRACTION*x1) {
		cout << fabs(x1-x0) << endl;
		x0 = x1;
		f0 = pow(x0, n) - x;
		f1 = n*pow(x0, n - 1) - x0;
		x1 = x0 - f0 / f1;
	}
	return x1;
}

int main()
{
	double x;
	int n;
	cout << "Enter number : ";
	cin >> x;
	cout << "\nEnter exponent : ";
	cin >> n;
	cout << "Number was : " << x << ", root is "
		<< NewtRoot(x, n) << endl;

	system("pause");
	return 0;
}