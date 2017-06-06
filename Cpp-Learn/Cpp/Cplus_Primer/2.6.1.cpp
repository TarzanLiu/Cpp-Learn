#include<iostream>
#include<string>

using namespace std;

struct Sales_data 
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{
	Sales_data data1, data2;
	double price = 0;
	cin >> data1.bookNo >> data1.revenue >> price;
	data1.revenue = data1.units_sold*price;
	
	cin >> data2.bookNo >> data2.revenue >> price;
	data2.revenue = data2.units_sold*price;

	if (data1.bookNo == data2.bookNo)
	{
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;

		cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0)
		{
			cout << totalCnt / totalCnt << endl;
		}
		else
			cout << "(no sales)" << endl;
		return 0;
	}
	else
	{
		cerr << "Data must refer to the sames ISBN" << endl;
		return -1;
	}
	system("pause");
	return 0; 

}