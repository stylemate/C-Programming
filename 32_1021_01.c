#include <stdio.h>

int sum(int x, int y)
{
	return x+y;
}

int mul(int x, int y)
{
	return x*y;
}

int exp(int x)
{
	return x*x*x*x;
}

void head()
{
	printf("10월 21일 차형근 프로그램입니다\n");
}

void main()
{
	int a, b, res;

	head();
	printf("(1)숫자 2개를 입력해주세요: \n");
	scanf("%d %d", &a, &b);
	res = sum(a,b);
	printf("두숫자의 합은 %d \n\n\n", res);

	printf("(2)숫자 2개를 입력해주세요: \n");
	scanf("%d %d", &a, &b);
	res = mul(a,b);
	printf("두숫자의 곱셈은 %d \n\n\n", res);

	printf("(3)숫자 하나를 입력해주세요: \n");
	scanf("%d", &a);
	res = exp(a);
	printf("이숫자의 4제곱은 %d \n\n\n", res);

	printf("(4) 구구단 출력\n");
	printf("\t1\t2\t3\t4\t5\t6\t7\t8\t9\n        -------------------------------------------------------------------\n");

	for (b=1; b < 10; b++)
	{
		printf("%d",b);
		for (a = 1; a < 10; a++)
		{
			printf("\t%d",a*b);
		}
		printf("\n");
	}
}
