#include<stdio.h>
#include<string.h>
#include<stdbool.h>

enum spectrum {red,orange,yellow,green,blue,violet};	
const char * colors[] = { "red","orange","yellow","green","blue","violet" };

#define LEN 30

int main(void)
{
	char choice[LEN];
	enum spectrum color;
	bool color_is_found = false;

	puts("Enter a color (empty line to quit):");
	while (gets(choice) != NULL && choice[0] != '\0')
	{
		for (color = red; color <= violet; color++)
		{
			if (strcmp(choice, colors[color]) == 0)
			{
				color_is_found = true;
				break;
			}
		}

		if (color_is_found)
			switch (color)
			{
			case red:puts("Roses are red.");
				break;
			case orange:puts("Orange.");
				break;
			case yellow:puts("Yellow.");
				break;
			case green:puts("Green.");
				break;
			case blue:puts("Blue.");
				break;
			case violet:puts("Violet.");
				break;
			default:
				break;
			}
		else
			printf("I don't know");
		color_is_found = false;
		puts("Next color");

	}
	puts("Goodbye");

	system("pause");
	return 0;



}