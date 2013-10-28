#include <stdio.h>

void main()
{
	int count, star, line, input, first, second, rep, j, i, limit, factorial;
	j=1;
	i=1;
	factorial=1;

	char ch = 'A';

	printf("1번#####\n");
	for (count=1; count<10; count++)
	{
		printf("%d \n", count);
	}


	printf("2번######\n");
	scanf("%d", &input);
	for (line = 1; line <= input; line++)
	{
		for (star= 1; star <line+1; star++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("3번#####\n");
	for (first =1; first <10; first++)
	{
		for (second = 1; second<10; second++)
		{
			printf("%d x %d = %d \n", first, second, first*second);
		}
		printf("\n");
	}
	
/*	printf("4-1번#####\n");
	while (1)
	{
		printf("Repeat: %d \n", rep);
		rep++;
	}
*/
	printf("4-2번#####\n");
	while (j < 10)
	{
		printf("%d \n", j);
		j++;
	}

	printf("5번#####\n");
	scanf("%d", &limit);
	while (i<=limit)
	{
		factorial *= i;
		printf("%d! = %d \n", i++, factorial); 
	}
	
	printf("6번#####\n");
	do 
	{
		printf("%c \n", ch++);
	}
	while (ch <= 'Z');
}
