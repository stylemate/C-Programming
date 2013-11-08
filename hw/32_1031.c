#include <stdio.h>

void main ()
{
	int a1[2][3];
	int b1[2][3];
	int c1[2][3];

	int i;
	int first,second;

	printf("************* Array: Justin Cha **************\n");
	printf("a1 배열 입력\n");
	for (first = 0; first < 2; first++)
	{
		for (second = 0; second < 3; second++)
		{
			printf("a1[%d][%d] :",first, second);
			scanf("%d", &a1[first][second]);
		}
	}

	printf("\nb1 배열 입력\n");

	for (first = 0; first < 2; first++)
	{
		for (second = 0; second < 3; second++)
		{
			printf("b1[%d][%d] :",first, second);
			scanf("%d", &b1[first][second]);
		}
	}

	printf("\na1값을 출력합니다\n");
	
	for (first = 0; first < 2; first++)
	{
		for (second = 0; second < 3; second++)
		{
			printf("a1[%d][%d]: %d\n", first, second, a1[first][second]);
		}
	}

	printf("\nb1값을 출력합니다\n");

	for (first = 0; first < 2; first++)
	{
		for (second = 0; second < 3; second++)
		{
			printf("b1[%d][%d]: %d\n", first, second, b1[first][second]);
		}
	}
	
	printf("\nc1값을 출력합니다\n");
	
	for (first = 0; first < 2; first++)
	{
		for (second = 0; second < 3; second++)
		{
			c1[first][second] = (a1[first][second] + b1[first][second]);
			printf("c1[%d][%d]: %d\n", first, second, c1[first][second]);
		}
	}
}

