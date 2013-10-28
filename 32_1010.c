#include <stdio.h>
void main()
{
	char ch = 'B';
	int a, b, q, p, c, e, f, x, y;
	a = 12;
	b = 4;
	q = 10;
	p = 10;
	c = 10;
	x = 10;
	y = 5;

	printf("차형근 프로그램임 \n\n\n\n\n");

	printf("1) sizeof() 명령어 사용 \n");
		printf("\t size of char: %d byte \n", sizeof(char));
		printf("\t size of int: %d byte \n", sizeof(int));
		printf("\t size of short: %d byte \n", sizeof(short));
		printf("\t size of long: %d byte \n", sizeof(long));
		printf("\t size of float: %d byte \n", sizeof(float));
		printf("\t size of double: %d byte \n \n", sizeof(double));

	printf("2번 ASCII 코드 사용 \n");
		printf("\t B is in number: %d \n", ch);
		printf("\t B is in alphabet: %c \n \n", ch);

	printf("3번 산술연산자 사용 \n");
		printf("\t a+b의 결과: %d \n", a+b);
		printf("\t a-b의 결과: %d \n", a-b);
		printf("\t a*b의 결과: %d \n", a*b);
		printf("\t a/b의 결과: %d \n", a/b);
		printf("\t a%b의 결과: %d \n", a%b);
		printf("\t -a의 결과: %d \n \n", -a);
	
	printf("4번 증감연산자 q++ \n");
		printf("\t q++: %d \n \n", q=q++);

	printf("5번 증감연산자 ++p \n");
		printf("\t ++p: %d \n \n", p=++p);

	printf("6번 증감연산자 before and after \n");
		printf("\t Before: %d \n", c=c++);
		printf("\t After: %d \n \n", c);

	printf("e에 들어갈 값을 쓰시오:");
	scanf("%d", &e);
	printf("f에 들어갈 값을 쓰시오:");
	scanf("%d", &f);

	if ((e>f) && (e<10))
		printf("7번 레알 참트루\n \t e가 f 보다 크고 e가 10보다 적은게 김레알 최트루임: %d \n \n", (e>f) && (e<10));
	else
		printf("7번 거짓을 아뢰오 \n \t e가 f보다 크고 e가 10보다 적은게 뻥이래: %d \n \n", (e>f) && (e<10));

	printf("8번 관계 연산자 \n");
		printf("\t x > y: %d \n", x>y);
		printf("\t x < y: %d \n", x<y);
		printf("\t x == y: %d \n", x==y);
		printf("\t x != y: %d \n \n", x!=y);
}
