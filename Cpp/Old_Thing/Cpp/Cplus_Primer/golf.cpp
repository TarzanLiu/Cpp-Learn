#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void input(int *grade);
void show(void);
double ave(int *grade);

const int size = 10;

int main()
{
	int gra[10];
	input(gra);
	show();
	cout << "Average: " << ave(gra) << endl;

	system("pause");
	return 0;
}

void input(int *grade)
{
	int i;
	cin >> *grade;

}

