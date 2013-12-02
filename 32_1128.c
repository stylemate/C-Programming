#include <stdio.h>
#include <stdlib.h>

void setI();
void vlswp();
void rfswp();

void main()
{
	int count;
	int *ptr_int = NULL;
	int input_size;
	
	int i=5;
	int a = 100, b = 200;

	printf("===type input_size plz:");
	scanf("%d", &input_size);
	ptr_int = (int*)malloc(input_size * sizeof(int));
	if (ptr_int == NULL)
		printf("Lack of Memory");
	printf("===input those values\n");
	for (count = 0; count < input_size; count++)
	{
		printf("input number: ");
		scanf("%d", &ptr_int[count]);
	}

	printf("===show number\n");
	for (count = 0; count < input_size; count++)
	{
		printf("%d number: %d\n", count+1, ptr_int[count]);
	}
	free(ptr_int);
	printf("Memory freed\n");
	
	printf("*********************\n\n\n");
	printf("In main before i = %d\n", i);
	setI(&i);
	printf("In main after i = %d\n", i);
	printf("*********************\n\n\n");
	printf("Swap by Value\n");
	printf("before a = %d b = %d\n", a, b);
	vlswp(a,b);
	printf("after  a = %d b = %d\n", a, b);

	printf("*********************\n\n\n");
	printf("Swap by reference\n");
	printf("before a = %d b = %d\n", a, b);
	rfswp(&a,&b);
	printf("after  a = %d b = %d\n", a, b);
	printf("*********************\n\n\n");
}

void setI(int* i)
{
	*i = 10;
	printf("In setI i = %d\n", *i);
}

void vlswp(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void rfswp(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
