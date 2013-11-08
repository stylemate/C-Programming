#include <stdio.h>
#include <ctype.h>

void main()
{
	char input;

a:	printf("====MENU====\n");
	printf("A. Insert\n");
	printf("B. Update\n");
	printf("C. Find\n");
	printf("D. Exit\n");

	input = getchar();



		switch (input)
		{	


			case 'A':
				printf("==> Choice Menu: A. Insert\n");
			goto a;
			case 'B':
				printf("==> Choice Menu: B. Update\n");
			goto a;
			case 'C':
				printf("==> Choice Menu: C. Find\n");
			goto a;		
			default:
				printf("Good Bye T^T\n");
			break;
		}
	


}
