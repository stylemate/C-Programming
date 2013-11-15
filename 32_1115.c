#include <stdio.h>

int sum(int a, int b);
int product(int a, int b);
int difference(int a, int b);
int quotient(int a, int b);
int any_fun(int (*pf)(int, int), int a, int b);

void local(void);
void statik(void);

int g_count;

void main()
{
	int one = 10, two = 5, result;
	int i;
	int (*pfun[])(int, int) = {sum, product, difference, quotient};
	
	for(i = 0; i < 4; i++)
	{
		result = pfun[i](one,two);
		printf("\n%d'sresult = %d", i, result);	
	}
	
	result = pfun[1](pfun[0](one,two),pfun[2](one,two));
	printf("\n\nsum 과 difference 를 곱한 값 =%d\n", result);

	printf("\n continued... \n\n\n\n\n\n\n");
	int (*pf)(int, int) = sum;
	result = any_fun(pf,one, two);
	printf("\nsum result: %d\n", result);
	result = any_fun(product, one, two);
	printf("product result = %d\n", result);
	printf("difference result = %d\n", any_fun(difference,one, two));
	printf("quotient result = %d\n\n\n", any_fun(quotient, one, two));
	 

	printf("\n continueeeeed \n\n\n\n\n");
	
	for(i = 0; i < 5; i++)
	{
		local();
		statik();
	}

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

int any_fun(int (*pf)(int, int), int a, int b)
{
	return pf(a, b);
}

void local(void)
{
	int count = 0;
	printf("local count = %d\tg_count = %d\t", ++count, ++g_count);
}

void statik(void)
{
	static int count = 0;
	printf("statik static count = %d\tg_count = %d\n\n", ++count, ++g_count);
}
