#include <stdio.h>

void main()
{
	int input, ea, i, sum = 0;
	
	printf("Justin's Program\n");
	printf("You can choose one number (1~1000) :");
	while ((scanf("%d", &input) < 1001))
	{
		ea = 1000/input;
		printf("%d's multiple (EA): %d\n", input, ea);
		for (i = 0; i < ea; i++)
			sum += (input*(i+1));
		printf("sum: %d\n", sum);
		break;
	}
}
