#include <stdio.h>
#include <string.h>

void main()
{
	char ary[6] = {'a','b','c','d','e'};
	char buf[6] = "fghij";
	char *ptr = "klmno";

	int i=0;
	int j=0;
	int k;
	
	char c[100];
	char d[100];

	char a[] = "NET";
	char b[4];
	
	
	printf("\n32 차형근 13103202\n\n");
	printf("array : %d \tarray : %s\n", strlen(ary), ary);
	printf("buf : %d \tbuf: %s\n", strlen(buf), buf);
	printf("ptr : %d \tptr: %s\n", strlen(ptr), ptr);

	printf("\nNumber 2\n");
	while (a[i] != '\0')
	{
		b[i] = a[2-i];
		i++;
	}

	b[3] = '\0';
	printf("%s Reverse is %s \n", a, b);

}

