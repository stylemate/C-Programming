#include <stdio.h>
#define PRAISE "Magnificent and Holy is your name."

void main ()
{
	char name[40];

	printf("나의 주인되신 분은:");
	scanf("%s", name);
	printf("나의 %s. %s \n", name, PRAISE);
}
