#include <stdio.h>

void main()
{
	int h, m, r;
	
	printf("옥정윤 교슈님 사랑합니다 \n\n\n\n");
	printf("몇시간인가요?: ");
	scanf("%d", &h);
	
	printf("몇분인가요?: ");
	scanf("%d", &m);

	r = (h*60)+m;
	printf("분단위로 표시하면: %d \n", r);

}
