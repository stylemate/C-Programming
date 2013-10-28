#include <stdio.h>

void main ()
{
	int b = 212;
	int rv;

	rv = printf("%d F is water's boiling point. \n", b);
	printf("The printf() function printed %d characters. \n", rv);
}
