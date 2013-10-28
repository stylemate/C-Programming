#include <stdio.h>

void main ()
{
	int n = 0;
	size_t intsize;

	intsize = sizeof (int);
	printf("n = %d, n has %zd bytes; all ints have %zd bytes. \n", n, sizeof n, intsize);
	
}
