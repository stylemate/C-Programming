#include <stdio.h>

int sum(int x, int y)
{
	return x+y;
}

void head()
{       
        printf("********************\n*      Justin      *\n********************\n");
}


void main ()
{
	int a, b, res;

	head();
	printf("숫자 2개를 입력해라: \n");
	scanf("%d %d", &a, &b);
	res = sum(a,b);
	printf("두숫자의 합은 %d \n", res);
}
