#include <stdio.h>
void main()
{
	int x, y, z;
	printf("어서오세요 고객님 xyz 로 이상한 계산을 무료로 해드립니다! \n \n");
	
	printf("x 값을 정해주세요: ");
		scanf("%d", &x);
	printf("y 값을 정해줘: ");
		scanf("%d", &y);
	printf("z 값을 정해: ");
		scanf("%d", &z);
	
	printf("\n자 그럼 {(x+y) * (x+z)} / (y%z) 를 해볼께요");
		printf("{(x+y) * (x+z)} / (y%z) : %d \n", (x+y) * (x+z) / (y%z));

}
