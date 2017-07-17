#include<stdio.h>
#include<stdlib.h>

char USART1[] = { 0xfe,0x04,0x11,0x22,0x33,0x44,0x00,0x00 };


typedef struct pro
{
	char head;
	char len;
	char *data;
	char crc[2];

};

char DATA[300];

int main()
{		 
	int i;
	pro a;
	a.head = USART1[0];
	a.len = USART1[1];
	a.data = DATA;


	
}