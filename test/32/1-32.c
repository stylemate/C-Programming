#include <stdio.h>

void main()
{
	int h,w,h2,w2;
	int space, line, star, height, width;	

	printf("높이 입력:");
	scanf("%d", &h);
	printf("넓이 입력:");
	scanf("%d", &w);

	for( h2 = 1; h2 <=h ; h2++)
	{
		for (w2 = 1; w2 <=w; w2++)
			printf("*");
		printf("\n");
	}

	printf("\n=== make rectangle! ===\n");
	printf("input width:");
	scanf("%d", &width);
	printf("input height:");
	scanf("%d", &height);
	
	for(line = height; line >  0; line--)
	{
	
		for(space = line; space > 0; space--)
		{
			printf(" ");
		}
		
		for(star = 0; star < width; star++)
			printf("*");
		printf("\n");	
	}
}
