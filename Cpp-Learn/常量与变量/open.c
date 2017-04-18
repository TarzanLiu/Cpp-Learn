#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
void mainAAA()
{
	int  num;
	num = 10;
	//scanf("%d", &num);
	char str[50];
	sprintf(str, "for /l %%i in  (1,1,%d) do @echo china", num);
	system(str);							 
	system("pause");
}