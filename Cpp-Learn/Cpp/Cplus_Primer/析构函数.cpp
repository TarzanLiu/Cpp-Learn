#include<iostream>
using namespace std;

class VLA {
public:
	VLA(int len);
	~VLA();

public:
	void input();
	void show();

private:
	int *at(int i);

private:
	const int m_len;
	int *m_arr;
	int *m_p;
};

VLA::VLA(int len) :m_len(len)
{
	if (len > 0) { m_arr = new int[len]; }
	else { m_arr = NULL; }

}

VLA::~VLA()
{
	delete[]m_arr;
}

void VLA::input() {
	for (int i = 0; m_p = at(i); i++) { cin >> *at(i); }
}
void VLA::show() {
	for (int i = 0; m_p = at(i); i++) {
		if (i == m_len - 1) { cout << *at(i) << endl; }
		else { cout << *at(i) << ", "; }
	}
}
int * VLA::at(int i) {
	if (!m_arr || i<0 || i >= m_len) { return NULL; }
	else { return m_arr + i; }
}
int main() {
	//创建一个有n个元素的数组（对象）
	int n;
	cout << "Input array length: ";
	cin >> n;
	VLA *parr = new VLA(n);
	//输入数组元素
	cout << "Input " << n << " numbers: ";
	parr->input();
	//输出数组元素
	cout << "Elements: ";
	parr->show();
	//删除数组（对象）
	delete parr;
	system("pause");
	return 0;
}