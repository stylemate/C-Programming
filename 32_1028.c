#include <stdio.h>

void main ()
{
	int a[5], b[5], i;
	printf("차형근 프로그램이라는데...\n");	
	printf("\n숫자를 입력해봐 \n");	
	for (i = 0; i < 5; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d", &a[i]);
	}
	
	printf("\n바꿔볼께요 \n");
	for (i = 0; i < 5; i++)
	{
		b[i] = a[4-i];
		printf("b[%d] : %d \n", i, b[i]);
	} 
}
