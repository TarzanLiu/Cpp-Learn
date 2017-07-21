#include<iostream>
#include<string>

using namespace std;

int main()
{
	string first;
	string last;
	char grade;
	int age;


	cout << "What is your first name? ";
	getline(cin, first);
	cout << "What is your last name? ";
	getline(cin, last);
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;

	cout <<"Name: "<< last << ", " << first << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;

	system("pause");
	return 0;
}