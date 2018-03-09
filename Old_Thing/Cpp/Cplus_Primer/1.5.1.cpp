#include<iostream>
#include"Sales_item.h"

//int main()
//{
//	Sales_item book;
//
//	std::cin >> book;
//	std::cout << book << std::endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	Sales_item item1, item2;
//	std::cin >> item1 >> item2;
//	std::cout << item1 + item2 << std::endl;
//
//	system("pause");
//	return 0;
//}

int main()
{
	int a = 123;

	int *pd=&a;
	*pd = 234;
	int *l = NULL;
	
	std::cout << *pd << std::endl;
	std::cout << pd << std::endl;
	std::cout << a << std::endl;
	system("pause");
	return 0;

}