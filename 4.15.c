#include <stdio.h>

void main ()
{
	int age;
	float assets;
	char pet[30];

	printf("Enter you age, assets, and favorite pet. \n");
	scanf("%d", &age);
	scanf("%f", &assets);
	scanf("%s", pet);

	printf("%d $%.2f %s \n", age, assets, pet);
}
