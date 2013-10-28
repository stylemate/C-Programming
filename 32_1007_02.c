#include <stdio.h>

void main()
{
	int cm;
	double r;

	printf("옥정윤 교슈님 사랑합니다\n\n\n\n");
	
	printf("당신의 키는? (cm): ");
	scanf("%d", &cm);

	r = cm/2.54;
	printf("당신의 인치단위 키는: %f \n", r);	
}
