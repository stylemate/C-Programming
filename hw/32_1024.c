#include <stdio.h>

void main()
{
	int h,w,h2,w2;
	int ascii = 32, print, a, b, line = 0;
	printf("높이를 입력하세요:");
	scanf("%d", &h);
	printf("넓이를 입력하세요:");
	scanf("%d", &w);
	
	for (h2 = 1;h2 <= h; h2++)
	{
		for (w2 =1; w2 <= w; w2++)
			printf("*");
		printf("\n");
	}


	printf("\n\n2번 아스키코드 표시 \n\n");
	for (a = 0; a < 6; a++)
		printf("16 : 10: c | ");
	printf("\n");
	for (a = 0; a < 6; a++)
		printf("-----------+-");
	printf("\n");
	for (line = 0; line < 16; line++)
		{		
			for (print = 0; print < 6; print++)
				{
					printf("%x :%3d: %c | ", ascii, ascii, ascii);
					ascii+=16;
				}
			ascii-=95;
			printf("\n");		
		}
		printf("\n");
}
