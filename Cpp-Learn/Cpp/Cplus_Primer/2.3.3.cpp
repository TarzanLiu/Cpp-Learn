#include<iostream>
int main()
{
	using namespace std;
	int ival = 1024;
	int *pi = &ival;
	int **ppi = &pi;
	cout << ival << "\n" << *pi << "\n" << **ppi << endl;
	system("pause");
	return 0;
}