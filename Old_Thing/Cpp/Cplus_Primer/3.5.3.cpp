#include<string>	
#include<vector>
#include<iostream>

using namespace std;

int main()
{
	int ia[] = { 0,1,2,3,4,5,6,7,8,9 };
	auto ia2(ia);

	for (auto i : ia)
		cout << i << " ";
	cout << endl;

	for (auto k=ia2;k!=ia2+10;k++)
		cout << *k << " ";
	cout << endl;

	int *p = ia;
	for (int i = 0; i != 10; i++)
	{
		cout << *p << " ";
		p++;
	}
	cout << endl;

	int *e = &ia[10];
	for (int *b = ia; b != e; ++b)
		cout << *b << " ";
	cout << endl;


	cout << p[-2] << endl;





	system("pause");
	return 0;
}