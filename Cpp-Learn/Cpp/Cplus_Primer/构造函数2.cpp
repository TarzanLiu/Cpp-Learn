#include<iostream>
using namespace std;

class Student {
private:
	char *m_name;
	int m_age;
	float m_score;

public:
	Student();
	Student(char *name, int age, float score);
	void setname(char *name);
	void setage(int age);
	void setscore(float score);
	void show();

};

Student::Student(char *name,int age,float score)
{
	m_name = name;
	m_age = age;
	m_score = score;
}
Student::Student()
{
	m_name = NULL;
	m_age = 0;
	m_score = 0.0;

}

void Student::setname(char *name) {
	m_name = name;
}
void Student::setage(int age) {
	m_age = age;
}
void Student::setscore(float score) {
	m_score = score;
}
void Student::show() {
	if (m_name == NULL || m_age <= 0) {
		cout << "��Ա������δ��ʼ��" << endl;
	}
	else {
		cout << m_name << "��������" << m_age << "���ɼ���" << m_score << endl;
	}
}
int main() {
	//���ù��캯�� Student(char *, int, float)
	Student stu("С��", 15, 92.5f);
	stu.show();
	//���ù��캯�� Student()
	Student *pstu = new Student();
	pstu->show();
	pstu->setname("�");
	pstu->setage(16);
	pstu->setscore(96);
	pstu->show();
	system("pause");
	return 0;
}