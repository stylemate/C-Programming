#include <stdio.h>

void main()
{
	int h,w,r;

	printf("옥정윤 교슈님 사랑합니다\n\n\n\n");

	printf("높이를 입력하세요:");
	scanf("%d", &h);

	printf("넓이를 입력하세요:");
	scanf("%d", &w);

	r = (h*2)+(w*2);
	printf("둘레는: %d \n", r);
	
}
