#include<iostream>
int main()
{
	using namespace std;
	double obj = 3.14, *pd = &obj;
	void *pv = &obj;

	cout << *pv << endl;

}