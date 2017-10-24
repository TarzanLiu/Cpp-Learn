#include<iostream>
#include<string>	

using namespace std;

int main()
{
	string str("some string");

	//for (auto c : str)
	//	cout << c << endl;



	//string s("Hello World!!");

	/*decltype(s.size()) punct_cnt = 0;
	for (auto c : s)
		if (ispunct(c))
			++punct_cnt;
	cout << punct_cnt << " punctuation characters in " << s << endl;*/

	//for (auto &c : s)
	//	c = toupper(c);
	//cout << s << endl;
	//s[0] = tolower(s[0]);
	//cout << s << endl;;

	const string hex("0123456789ABCDEF");
	cout << "Enter" << endl;

	string r;
	string::size_type n;

	while (cin >> n) 
		if (n < hex.size())
			r += hex[n];
	cout << r << endl;














	system("pause");
	return 0;
}