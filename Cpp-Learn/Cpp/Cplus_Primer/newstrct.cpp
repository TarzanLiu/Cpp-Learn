#include<iostream>
using namespace std;

struct in
{
	char name[20];
	float vol;
	double price;
};

int main()
{
	in *ps = new in;
	cout << "Enter name of in item: ";
	cin.get(ps ->name, 20);
	cout << "Enter vol in cubic feet: ";
	cin >> (*ps).vol;
	cout << "Enter price: $";
	cin >> ps->price;
	cout << "Name: " << (*ps).name << endl;
	cout << "Volume: " << ps->vol << " cublc feet\n";
	cout << "Price: $" << ps->price << endl;
	delete ps;

	system("pause");
	return 0;
}