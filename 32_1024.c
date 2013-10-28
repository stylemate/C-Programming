#include <stdio.h>

int sum;

void main()
{
	int stu[5];
	int count;
	float sum2, avr; //ㅋ 지역변수

	printf("Justin's Program\n");
	int i;
	printf("Global sum: %d \n", sum);
	printf("Local i : %d \n", i);

	for(i=1; i<=10; i++)
		sum += i;
	printf("Result sum: %d \n", sum);


	printf("Type 2 Usage of Array\n");
	
	for (count=1;count < 6; count++)
		{
		printf("학생 %d번:", count);
		scanf("%d", &stu[count-1]);
		} 
	for (count = 1; count <6; count++)
		{
		sum2+=stu[count-1];
		avr=sum2/5;
		}

	printf("\n합은 %1.2f \n",sum2);
	printf("평균은 %1.2f \n", avr);
}


