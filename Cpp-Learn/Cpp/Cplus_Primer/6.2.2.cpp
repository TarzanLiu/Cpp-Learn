#include<string>
#include<iostream>

using namespace std;

//void reset(int &i)
//{
//	i = 0;
//
//}

string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
	auto ret = s.size();
	occurs = 0;
	for (decltype(ret) i = 0; i != s.size(); i++)
	{
		if (s[i] == c)
		{
			if (ret == s.size())
				ret = i;
			++occurs;

		}
	}
	return ret;
}

int main()
{
	//const string s("acjskifflsvvvsscvreg");

	string s;
	char w;
	cin >> s;
	cin >> w;

	string::size_type n;
	cout << find_char(s, w, n)<<endl;
	cout << n << endl;

	/*int i;
	cin >> i;
	reset(i);
	cout << i; */

	


	system("pause");
	return 0;


}