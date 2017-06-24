#include<iostream>
using namespace std;

class family {
private:
	char *husband;
	char *wife;
	char *son;
	char *daughter;
	family *ptr;
public:
	void initialize(void);
	void output(family *ptr);
};


family And;

void family::initialize(void)
{
	And.ptr = &And;
	And.ptr->husband = "John";
	And.ptr->wife = "Mary";
	And.ptr->son = "Joey";
	And.ptr->daughter = "Marla";
	And.output(And.ptr);
}

void family::output(family *ptr)
{
	cout << "husband is " << ptr->husband << endl
		<< "wife is " << ptr->wife << endl
		<< "son is " << ptr->son << endl
		<< "daughter is " << ptr->daughter << endl;
}
int main(void)
{
	//initialize被对象名限定
	//注意圆点（.）操作符
	And.initialize();
	system("pause");
	return 0;
}




