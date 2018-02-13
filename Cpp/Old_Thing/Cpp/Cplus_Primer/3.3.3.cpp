#include<string>
#include<iostream>
#include<vector>

using  namespace std;

int main()
{
	//vector<int> v{ 1,2,3,4,5,6,7,8,9 };

	//for (auto &i : v)
	//	i = i*i;
	//for (auto i : v)
	//	cout << i << " ";
	//cout << endl;

	vector<int> s(11, 0);

	unsigned g;
	while (cin >> g)
	{
		if (g <= 100)
		{
			s[g / 10]++;
		}
	}

	for (auto &i : s)
		cout << i << " ";
	cout << endl;

	




	system("pause");
	return 0; 
}