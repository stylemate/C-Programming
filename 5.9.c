#include <stdio.h>
#define SEC_PER_MIN 60

void main()
{
	int sec, min, left;
	printf("seconds to minutes and seconds\n");
	printf("Enter the number of seconds:");
	scanf("%d", &sec);
	while (sec > 0)
	{
		min = sec / SEC_PER_MIN;
		left = sec % SEC_PER_MIN;
		printf("%d seconds is %d minutes, %d seconds. \n", sec, min ,left);
		fflush(stdin);
		printf("Enter next value:");
		scanf("&d", sec);
	}
}
