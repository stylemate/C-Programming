#include <stdio.h>

void main ()
{
	float length, width;
	
	printf("직사각형의 길이를 입력하세요: \n");
	
	while (scanf("%f", &length) == 1)
	{
		printf("길이 = %0.2f: \n", length);
		printf("넓이를 입력하세요: \n");
		if (scanf("%f", &width) != 1)
			break;
		printf("넓이 = %0.2f: \n", width);
		printf("평방면적 = %0.2f: \n", length * width);
		printf("직사각형의 길이를 입력하세요: \n");
	}
}
