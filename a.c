#include <stdio.h>

void main()
{
	int line, space, height, input, width, i = 0;
	printf("input line count:");
	scanf("%d", &input);
	

	printf("\n");
	for(height = input; height > 0; height--)
	{
		i++;
		for(space = 0; space < i; space++)
			printf(" ");
		for(width = input; width > 0; width--)
			printf("*");
		printf("\n");
	}
}
