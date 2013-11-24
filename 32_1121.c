#include <stdio.h>

void main()
{
	char arrayString[] = "ab";
	int i, al;
	int board_one[] = {100, 200, 300, 400, 500, 600};
	int board_two[][3] = {10, 20, 30, 40, 50, 60};

	printf("array's address\t\t:%p\n", arrayString);
	printf("first letter address\t:%p\n", &arrayString[0]);
	printf("first letter\t\t:%c\n\n", arrayString[0]);

	printf("second letter\t\t:%c\n", arrayString[1]);
	printf("*(arrayString+1)\t:%c\n", *(arrayString+1));
	printf("arrayString+1\t\t:%p\n\n\n", (arrayString+1));

	al = sizeof(board_one)/sizeof(int);	

	for (i = 0; i < al; i++)
	{
		printf("*board_one+%d\t:%d\n", i, *board_one+i);
		printf("*(board_one+%d)\t:%d\n\n", i, *(board_one+i));
	}

	printf("\n");

	al = sizeof(board_two)/sizeof(int);
	
	printf("board_two[1][1]\t\t:%d\n", board_two[1][1]);
	printf("*(board_two[1]+1)\t:%d\n", *(board_two[1]+1));
	printf("*(*board_two+4)\t\t:%d\n\n\n", *(*board_two+4));

	printf("&board_two[1][1]\t:%p\n", &board_two[1][1]);
	printf("board_two[1]+1\t\t:%p\n", board_two[1]+1);
	printf("*board_two+4\t\t:%p\n\n\n", *board_two+4);

	for (i = 0; i < al; i++)
	{
		printf("*(*board_two+%d)\t:%d\n", i, *(*board_two+i));
		printf("*board_two+%d\t:%p\n\n", i, *board_two+i);
	}
}
