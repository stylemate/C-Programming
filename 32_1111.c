#include <stdio.h>

void main()
{
	int num = 5, arr[3] = {0,};
	char ch = 'a';
	
	char a = 'A';
	char *p = &a;
	long num2 = 1;
	long *pnum = &num2;

	printf("num\t: %d\t", num);
	printf("num address\t: %p\n", &num);
	
	printf("ch\t: %c\t", ch);
	printf("ch address\t: %p\n", &ch);

	printf("arr[0]\t: %d\t", arr[0]);
	printf("arr[0] address\t: %p\n\n", &arr[0]);

	printf("a = %c\n", a);
	printf("a = %p\n", &a);
	printf("p = %p\n\n", p);

	printf("lnum = %d\n", ++*pnum);
}
