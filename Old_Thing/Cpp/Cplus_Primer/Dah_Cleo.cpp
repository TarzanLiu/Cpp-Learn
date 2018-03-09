#include<iostream>
using namespace std;

int main()
{
	float da=100.0, cl=100.0;
	float da_sum = 100.0, cl_sum = 100.0;

	int i;

	for (i = 0;cl_sum<=da_sum; i++)
	{
		da_sum = da_sum + da*0.1;
		cl_sum = cl_sum + cl_sum*0.05;
	}								  

	cout << i << endl;

	system("pause");
	return 0;


}