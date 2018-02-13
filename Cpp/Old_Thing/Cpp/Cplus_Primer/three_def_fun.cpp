#include<iostream>
using namespace std;

void a(void);
void b(void);


int main()
{
	a();
	a();
	b();
	b();

	system("pause");
	return 0;
}

void a(void)
{
	cout << "Three blind mice" << endl;
}

void b(void)
{
	cout << "See how they run" << endl;
}