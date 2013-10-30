#include <stdio.h>
#define STUNUM 4

void main()
{
	int mid[4];
	int fin[4];
	int count;
	float avrgsum;

	printf("***Grading System***\n");

	for (count=1;count < 5; count++)
	{
		printf("학생 %d번 중간고사:", count);
		scanf("%d", &mid[count-1]);
		printf("학생 %d번 기말고사:", count);
		scanf("%d", &fin[count-1]);
	}

	printf("\n");

	printf("******************************\n");
	printf("*  No.*  Mid *  Fin *  Sum   *\n");
	printf("******************************\n");
	for (count = 1; count < 5; count++)
	{
		printf("*  %d  *  %2d  *  %2d  *  %3d   *\n", count, mid[count-1], fin[count-1], mid[count-1] + fin[count-1]);
	}

	printf("******************************\n\n");

	for (count = 1; count < 5; count++)
	{
		printf("학생 %d번 평균: %d \n", count, (mid[count-1]+fin[count-1])/2);
	}
	
	printf("\n");
	for (count = 1; count <5; count++)
		avrgsum += (mid[count-1] + fin[count-1])/2;
	printf("전체평균: %1.2f \n", avrgsum/STUNUM);
}


