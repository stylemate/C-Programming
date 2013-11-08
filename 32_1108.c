#include <stdio.h>

void main()
{
	int count=0;
	int input[5], min, max, avg, tmp[3], grt, smt, count2, count3, sum = 0;
	int input2, height, space, star;
	char ch;	

	printf("1번 while 문으로 작성\n");	
	while ( count < 5)
	{
		printf("hello\n");
		count++;
	}

	printf("\n2번 for 문으로 작성\n");
	for (count = 0; count < 5; count++)
		printf("hello\n");

	printf("\n3번 do-while 문으로 작성\n");
	count = 0;
	do 
	{	printf("hello\n");
		count++;
	}
	while (count < 5);

	printf("\n문제 2번 5개 숫자 입력받기\n");
	for(count2 = 0; count2 < 5; count2++)
	{
		printf("Input %d:", count2+1);
		scanf("%d", &input[count2]);
	}

//greatest

	if (input[0] > input [1] && input[0] > input[2])
		tmp[0] = input[0];
	else if (input[1] > input [0] && input[1] > input [2])
		tmp[0] = input[1];
	else
		tmp[0] = input[2];
	
	if (input[1] > input [2] && input[1] > input[3])
		tmp[1] = input[1];
	else if (input[2] > input[1] && input[2] > input[3])
		tmp[1] = input[2];
	else
		tmp[1] = input[3];

	if (input [2] > input [3] && input[2] > input [4])
		tmp[2] = input[2];
	else if (input[3] > input[2] && input[3] > input[4])
		tmp[2] = input[3];
	else
		tmp[2] = input[4];

	if(tmp[0] > tmp[1] && tmp[0] > tmp[2])
		grt = tmp[0];
	else if (tmp[1] > tmp[0] && tmp[1] > tmp[2])
		grt = tmp[1];
	else
		grt = tmp[2];

//smallest

	if (input[0] < input [1] && input[0] < input[2])
		tmp[0] = input[0];
	else if (input[1] < input [0] && input[1] < input [2])
		tmp[0] = input[1];
	else
		tmp[0] = input[2];
	
	if (input[1] < input [2] && input[1] < input[3])
		tmp[1] = input[1];
	else if (input[2] < input[1] && input[2] < input[3])
		tmp[1] = input[2];
	else
		tmp[1] = input[3];

	if (input [2] < input [3] && input[2] < input [4])
		tmp[2] = input[2];
	else if (input[3] < input[2] && input[3] < input[4])
		tmp[2] = input[3];
	else
		tmp[2] = input[4];

	if(tmp[0] < tmp[1] && tmp[0] < tmp[2])
		smt = tmp[0];
	else if (tmp[1] < tmp[0] && tmp[1] < tmp[2])
		smt = tmp[1];
	else
		smt = tmp[2];

	for(count3 = 0; count3 < 5; count3++)
		sum += input[count3];
	avg = sum/5;

	printf("\nMIN:%d\tMAX:%d\tAVERAGE:%d\n", smt, grt, avg);


	printf("\n3번 문제 피라미드 출력\n");
	printf("몇층 짜리 만들까?:");
	scanf("%d", &input2);
	
	for(height = 0; height < input2; height++)
	{
		for(space = input2; space > height+1; space--)
			printf(" ");
		printf("*");
		for(star = 0; star < height; star++)
			printf("**");
		for(space = input2; space > height +1; space--)
			printf(" ");
		printf("\n");
	}
	printf("\n한번더 만드시겠습니까? y/n:");

	while ((ch = getchar()) && ch != 'n')
	{
		switch (ch)
		{
			case 'y':
				printf("몇층 짜리 만들까?:");
				scanf("%d", &input2);
		
				for(height = 0; height < input2; height++)
				{
					for(space = input2; space > height+1; space--)
						printf(" ");
					printf("*");
					for(star = 0; star < height; star++)
						printf("**");
					for(space = input2; space > height +1; space--)
						printf(" ");
					printf("\n");
				}
				printf("\n한번더 만드시겠습니까? y/n:");
				ch = getchar();
			default:
				break;
		}
	}
}
