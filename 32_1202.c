#include <stdio.h>
#include <stdlib.h>

void sub();

void main()
{
	int count;
	int* ptr_int = NULL;
	int input_size;
	int flag;
	int first, second, min, temp;
	int count2;

	printf("\n몇개 비교 할꺼야?:");
	scanf("%d", &input_size);
	ptr_int = (int*)malloc(input_size * sizeof(int));
	if (ptr_int == NULL)
		printf("메모리 부족 ㅠㅠ");
	printf("값을 입력합니다\n");
	for (count = 0; count < input_size; count++)
	{
		printf("%d번째 값:", count+1);
		scanf("%d", &ptr_int[count]);
	}
	
	printf("정렬 합세\n");
	for (first = 0; first < input_size-1; first++)
	{
		flag = 0;
		min = first;
		printf("Loop %d", first+1);
		for (second = first + 1; second < input_size; second++)
			if(ptr_int[min] > ptr_int[second])
			{	
				min = second;
				flag++;
			}
		temp = ptr_int[min];
		ptr_int[min] = ptr_int[first];
		ptr_int[first] = temp;
		for (count2 = 0; count2 < input_size; count2++)
			printf("%3d", ptr_int[count2]);
		printf("\n");
		if (flag == 0)
			break;
	}
	printf("\n\n\n\n\n");
	sub();
}

void sub()
{
	struct student
	{
		char name[20];
		int math;
		int eng;
		float avg;
	};

	struct student s1 = {"Justin", 98, 100};
	s1.avg = (s1.math + s1.eng)/2;
	printf("이름: %s\n", s1.name);
	printf("수학: %d\n", s1.math);
	printf("영어: %d\n", s1.eng);
	printf("평균: %.2f\n", s1.avg);
}
