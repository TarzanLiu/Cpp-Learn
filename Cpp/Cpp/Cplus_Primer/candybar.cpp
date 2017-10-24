#include<iostream>
#include<string>
using namespace std;

struct candy
{
	string name;
	float weight;
	int cal;

};

int main()
{
	candy snack;
	snack.name = "Mocha Munch";
	snack.weight = 2.3;
	snack.cal = 350;
	cout << snack.name << "\n" << snack.weight << "\n" << snack.cal << endl;
	system("pause");
	return 0;
}