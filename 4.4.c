#include <stdio.h>
#define PI 3.141592

void main()
{
	float area, circum, radius;

	printf("피자의 반지름은?:");
	scanf("%f", &radius);
	area = PI * radius * radius;
	circum = 2 * PI * radius;
	printf("피자의 둘레는 %1.2f이고 면적은 %1.2f 입니다\n", circum, area);
}
 
