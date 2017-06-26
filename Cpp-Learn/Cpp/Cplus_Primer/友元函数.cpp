#include <iostream>
using namespace std;
class Student {
public:
	Student(char *name, int age, float score);
public:
	friend void show(Student *pstu);  //��show()����Ϊ��Ԫ����
private:
	char *m_name;
	int m_age;
	float m_score;
};
Student::Student(char *name, int age, float score) : m_name(name), m_age(age), m_score(score) { }
//�ǳ�Ա����
void show(Student *pstu) {
	cout << pstu->m_name << "�������� " << pstu->m_age << "���ɼ��� " << pstu->m_score << endl;
}
int main() {
	Student stu("С��", 15, 90.6);
	show(&stu);  //������Ԫ����
	Student *pstu = new Student("����", 16, 80.5);
	show(pstu);  //������Ԫ����

	system("pause");
	return 0;
}