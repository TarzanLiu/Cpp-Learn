#include <iostream>
using namespace std;
class Student {
public:
	Student(char *name, int age, float score);
public:
	void show();
	char *getname() const;
	int getage() const;
	float getscore() const;
private:
	char *m_name;
	int m_age;
	float m_score;
};
Student::Student(char *name, int age, float score) : m_name(name), m_age(age), m_score(score) { }
void Student::show() {
	cout << m_name << "��������" << m_age << "���ɼ���" << m_score << endl;
}
char * Student::getname() const {
	return m_name;
}
int Student::getage() const {
	return m_age;
}
float Student::getscore() const {
	return m_score;
}
int main() {
	const Student stu("С��", 15, 90.6);
	//stu.show();  //error
	cout << stu.getname() << "��������" << stu.getage() << "���ɼ���" << stu.getscore() << endl;
	const Student *pstu = new Student("����", 16, 80.5);
	//pstu -> show();  //error
	cout << pstu->getname() << "��������" << pstu->getage() << "���ɼ���" << pstu->getscore() << endl;
	system("pause");
	return 0;
}