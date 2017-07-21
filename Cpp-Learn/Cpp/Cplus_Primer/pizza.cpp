#include<iostream>
#include<string>
using namespace std;

struct pie
{
	string name;
	int d;
	float w;
};

int main()
{
	pie *p = new pie;
	getline(cin, p->name);
	cin>>p->d;
	cin >> p->w;

	cout << p->name << endl;
	cout << p->d << endl;
	cout << p->w << endl;

	delete p;

	system("pause");
	return 0;


}