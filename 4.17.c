#include <stdio.h>

void main ()
{
	int n;
	
	printf("숫자 3개넣어 \n");
	scanf("%*d %*d %d", &n);
	printf("마지막 숫자는 %d \n", n);
}
