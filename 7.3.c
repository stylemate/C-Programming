#include <stdio.h>
#include <ctype.h>

void main ()
{
	char ch;
	
	printf("영단어를 입력하시면 알파벳을 하나더 올려버립니다. \n");

	while ((ch = getchar()) != '\n')

	{
		if (isalpha(ch))
			putchar(ch + 1);
		else
			putchar(ch);
	}

	putchar(ch);
}
