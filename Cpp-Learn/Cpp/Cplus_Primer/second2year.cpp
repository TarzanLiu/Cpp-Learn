#include<iostream>
using namespace std;

int main()
{
	long long sec;
	long m_1, h_1, d_1;
	int d, h, m, s;

	cout << "Enter the number of seconds: ";
	cin >> sec;


	
	s = sec % 60;
	m_1 = sec / 60;

	m = m_1 % 60;
	h_1 = m_1 / 60;

	h = h_1 % 24;
	d_1 = h_1 / 24;

	d = d_1;

	cout << sec << " seconds = " << d << " days, " << h << " hours, " << m << " minutes, " << s << " seconds" << endl;
	system("pause");
	return 0;


}
