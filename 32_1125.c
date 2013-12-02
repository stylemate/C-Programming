#include <stdio.h>

void main()
{
	int i = 10;
	int* pi = &i;
	int** ppi = &pi;
	int result;

	int a = 30, b = 40, c = 50;
	int* pArr[3] = {NULL};
	

	printf("====multi pointer===\n");
	*pi = (i+2);
	printf("*pi = (i+2)\t: after i = %d\n", i);
	**ppi = (*pi+2);
	printf("**ppi = (*pi+2)\t: after i = %d\n", i);
	**ppi = 20;
	printf("**ppi = 20\t: after i = %d\n", i);

	printf("\n\n");
	for (i = 0; i < 3; i++)
		printf("pArr[%d]의 값:%p\n", i, pArr[i]);

	pArr[0] = &a;
	pArr[1] = &b;
	pArr[2] = &c;

	printf("\n\n");
	for (i = 0; i < 3; i++)
		printf("%c의 주소: %p\t값:%d\n", 97+i, pArr[i], *pArr[i]);

	printf("\n\n");

	for (i = 0; i < 3; i++)
		printf("pArr[%d]의 저장 값:%p\t값:%d\n", i, pArr[i], *pArr[i]);
}
