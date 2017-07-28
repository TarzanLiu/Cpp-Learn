#include<iostream>
char *b(char c, int n);
int main()
{
	using namespace std;
	int times;
	char ch;

	cout << "Enter a character: ";
	cin >> ch;
	cout << "Enter an integer: ";
	cin >> times;
	char *ps = b(ch, times);
	cout << ps << endl;
	delete[] ps;
	
	system("pause");
	return 0;
}

char *b(char c, int n)
{
	char *pstr = new char[n + 1];
	pstr[n] = '\0';
	while (n-- > 0)
		pstr[n] = c;
	return pstr;
}