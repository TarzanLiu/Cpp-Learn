#include<iostream>
#include<string>
#include<vector>

using namespace std;


int main()
{
	//vector<int> v;
	//for (int i = 0; i != 100; i++)
	//{
	//	v.push_back(i);
	//	cout << v[i] << endl;
	//}

	string w;
	int i = 0;
	vector<string> t;
	while (cin >> w)
	{
		t.push_back(w);
		cout << t[i] << endl;
		i++;
	}






	system("pause");
	return 0;
}