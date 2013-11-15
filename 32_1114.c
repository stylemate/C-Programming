#include <stdio.h>

int sum(int a, int b);
int product(int a, int b);
int difference(int a, int b);
int quotient(int a, int b);

void main()
{
	int one = 10, two = 5, result;
	int (*pfun)(int, int);

	printf("\n++++++BEFORE++++++\n");
	printf("sum's address\t\t:%p\n", sum);
	printf("product's address\t:%p\n", product);
	printf("difference's address\t:%p\n", difference);
	printf("quotient's address\t:%p\n", quotient);
	printf("pfun's address\t\t:%p\n\n", pfun);

	pfun = sum;
	printf("++++++AFTER++++++\n");
	printf("sum's address\t\t:%p\n", sum);
	printf("pfun's address\t\t:%p\n", pfun);

	result = pfun(one, two);
	printf("pfun = sum\t\t result = %d\n\n", result);
	
	pfun = product;
	printf("++++++AFTER++++++\n");
	printf("product's address\t:%p\n", product);
	printf("pfun's address\t\t:%p\n", pfun);

	result = pfun(one, two);
	printf("pfun = product\t\t result = %d\n\n", result);

	pfun = difference;
	printf("++++++AFTER++++++\n");
	printf("difference's address\t:%p\n", difference);
	printf("pfun's address\t\t:%p\n", pfun);

	result = pfun(one, two);
	printf("pfun = difference\t result = %d\n\n", result);

	pfun = quotient;
	printf("++++++AFTER++++++\n");
	printf("quotient's address\t:%p\n", quotient);
	printf("pfun's address\t\t:%p\n", pfun);

	result = pfun(one, two);
	printf("pfun = quotient\t\t result = %d\n\n", result);

}

int sum(int a, int b)
{
	return a+b;
}

int product(int a, int b)
{
	return a*b;
}

int difference(int a, int b)
{
	return a-b;
}

int quotient(int a, int b)
{
	return a/b;
}
