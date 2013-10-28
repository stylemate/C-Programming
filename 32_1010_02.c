#include <stdio.h>
void main()
{
	int x, y, z;

	printf("안녕하세요 고객님 xyz 를 써넣으시면 그중 제일 큰것을 표시해 드립니다\n \n");
	
	printf("x 값을 정해주세요: ");
		scanf("%d", &x);
	printf("y 값을 정해줘: ");
		scanf("%d", &y);
	printf("z 값을 정해: ");
		scanf("%d", &z);

	if ((x>y) && (x>z))
		printf("너의 제일 큰 값은 x이다: %d \n", x);
	else if ((y>x) && (y>z))
		printf("너의 제일 큰 값은 y이다: %d \n", y);
	else
		printf("너의 제일 큰 값은 z이다: %d \n", z);

}
