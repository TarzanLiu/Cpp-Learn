#include<iostream>
using namespace std;

class Student {
private:
	char *m_name;
	int m_age;
	float m_score;

public:
	Student(char *name, int age, float score);
	void show();

};

Student::Student(char *name, int age, float score) :m_name(name), m_age(age), m_score(score)
{
			
}
void Student::show() {
	cout << m_name << "��������" << m_age << "���ɼ���" << m_score << endl;
}
int main() {
	Student stu("С��", 15, 92.5f);
	stu.show();
	Student *pstu = new Student("�", 16, 96);
	pstu->show();
	system("pause");
	return 0;
}