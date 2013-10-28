#include <stdio.h>
#include <ctype.h>

void main ()
{
	char ch;
	
	while ((ch = getchar()) != '\n')

	{
		if (isalpha(ch))
			putchar(ch + 1);
		else
			putchar(ch);
	}

	putchar(ch);
}
