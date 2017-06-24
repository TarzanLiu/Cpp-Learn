#include<iostream>
using namespace std;

class Student {
private:
	char *m_name;
	int m_age;
	float m_score;

public:
	void setname(char *name);
	void setage(int age);
	void setscore(float score);
	void show();
};


void Student::setname(char *name)
{
	m_name = name;
}

void Student::setage(int age)
{
	m_age = age;
}

void Student::setscore(float score)
{
	m_score = score;
}

void Student::show()
{
	cout << m_name << "'s age is " << m_age << ", and the score is " << m_score << endl;
}

int main()
{
	Student stu;
	stu.setname("Xiaoming");
	stu.setage(15);
	stu.setscore(92.5f);
	stu.show();

	Student	*pstu = new Student;
	pstu->setname("Li Hua");
	pstu->setage(16);
	pstu->setscore(96.0f);
	pstu->show();
	system("pause");
	return 0;
}