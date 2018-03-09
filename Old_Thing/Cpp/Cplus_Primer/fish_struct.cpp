#include<iostream>
#include<string>
using namespace std;

struct fish
{
	string name;
	int w;
	float l;
};

int main()
{
	fish x;

	while (1)
	{
		cout << "Enter fish name: ";
		getline(cin,x.name);
		cout << "Enter fish weight: ";
		cin >> x.w;
		cout << "Enter fish length: ";
		cin >> x.l;

		cout << x.name << endl;
		cout << x.w << endl;
		cout << x.l << endl;

		system("pause");
		return 0;

	}
}