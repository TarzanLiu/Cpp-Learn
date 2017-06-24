#include<iostream>

using namespace std;

class Student {
public:
	char *name;
	int age;
	float score;

	void say()
	{
		cout << name << "'s age is " << age << ", and the score is " <<score<< endl;
	}
};

int main()
{
	Student *pStu = new Student;
	pStu->name = "Xiaoming";
	pStu->age = 15;
	pStu->score = 92.5f;
	pStu->say();
	delete pStu;

	system("pause");
	return 0;
}

