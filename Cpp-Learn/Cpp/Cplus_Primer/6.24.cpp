#include<iostream>
#include<string>

using namespace std;

void print(const int (&ia)[10])
{
	/*for (size_t i = 0; i != 10; ++i)
		cout << ia[i] << endl;*/
	for (auto c :ia)
		cout << c << endl;
	
}
int main()
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	print(a);

	system("pause");
	return 0;
}
