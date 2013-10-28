#include <stdio.h>
#define PERIOD '.'

void main()
{
	int ch;
	int charcount = 0;
	
	printf("영문장을 쓰시면 문자가 몇개인지 알려드립니다. \n");
	while ((ch = getchar()) != PERIOD)
	{
		if (ch != '"' && ch!= '\'')
			charcount++;
	}
	printf("There are %d non-quote characters. \n", charcount);
}
