#include<stdio.h>
#define size 4
int main(void)
{
	short dates[size];
	short *pti;
	short index;
	double bills[size];
	double *ptr;
	pti = dates;
	ptr = bills;
	printf("%23s %10s\n", "short", "double");
	for (index = 0; index < size; index++)
		printf("pointers+%d: %10p %10p\n", index, pti + index, ptr + index);
	system("pause");
	return 0;
}