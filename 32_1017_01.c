#include <stdio.h>

void main()
{
	int first, second, i, factorial, limit, input, line, star;
	i = 1;
	factorial = 1;
	

	printf("형근 프로그램임\n\n");

	printf("1번 구구단 출력\n");
	for (second =1; second <10; second++)
	{
		for (first = 2; first<6; first++)
		{
			printf("%d x %d = %d \t", first, second, first*second);
		}
		printf("\n");
	}
	
	printf("\n");

	for (second =1; second < 10; second++)
	{
		for (first = 6; first < 10; first++)
		{
			printf("%d x %d = %d \t", first, second, first*second);
		}
		printf("\n");
	}

	printf("\n\n2번 원하시는 값의 팩토리얼을 구해드립니다:");
	scanf("%d", &limit);
	while (i<=limit)
	{
		factorial *= i;
		printf("%d! = %d \n", i++, factorial); 
	}

	printf("\n\n3번 쓰신 숫자만큼 별표를 해드립니다:");
	scanf("%d", &input);
	for (line = input; line > 0 ; line--)
	{
		for (star = line; star > 0; star--)
		{
			printf("*");
		}
		printf("\n");
	}
}
