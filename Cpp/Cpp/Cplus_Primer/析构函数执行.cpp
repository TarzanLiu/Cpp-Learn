#include <iostream>
#include <string>
using namespace std;

class Demo {
public:
	Demo(string s);
	~Demo();
private:
	string m_s;
};
Demo::Demo(string s) : m_s(s) { }
Demo::~Demo() { cout << m_s << endl; }

void func() {
	//�ֲ�����
	Demo obj1("1");
}

//ȫ�ֶ���
Demo obj2("2");

int main() {
	//�ֲ�����
	Demo obj3("3");
	//new�����Ķ���
	Demo *pobj4 = new Demo("4");
	func();
	cout << "main" << endl;

	system("pause");
	return 0;
}