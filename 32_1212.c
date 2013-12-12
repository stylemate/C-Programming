#include <stdio.h>
typedef union data
{
	char ch;
	int cnt;
	double real;
}data1;

typedef enum color
{
	yellow= 1,
	red,
	blue = 5,
	green,
	magenta
}color;

void main()
{
	FILE* fw;
	data1 uniondata;
	int i;
	printf("size of d1: %zu\t\t\tsize of uniondata: %zu\n", sizeof(data1), sizeof(uniondata));
	uniondata.ch = 'a';
	printf("uniondata.ch = 'a' \t\t이후:%c, %d, %6.2f\n", uniondata.ch, uniondata.cnt, uniondata.real);
	uniondata.cnt = 100;
	printf("uniondata.cnt = 100 \t\t이후:%c, %d, %6.2f\n", uniondata.ch, uniondata.cnt, uniondata.real);
	uniondata.real = 100000.00;
	printf("uniondata.real = 100000.00;\t이후:%c, %d, %6.2f\n", uniondata.ch, uniondata.cnt, uniondata.real);

	printf("숫자 골라봐\n");
	printf("1.Yellow\n2.Red\n5.Blue\n6.Green\n7.Magenta\n");
	scanf("%d", &i);
	switch(i)
	{
		case yellow:
		{
			printf("it's yellow\n");
			break;
		}
		case red:
		{
			printf("it's red\n");
			break;
		}
		case blue:
		{
			printf("it's blue\n");
			break;
		}
		case green:
		{
			printf("it's green\n");
			break;
		}
		case magenta:
		{
			printf("it's magenta\n");
			break;
		}
		default:
		{
			printf("go away\n");
			break;
		}
	}

	printf("파일 입출력\n");
	fw = fopen("test.txt", "w");
	if (fw == NULL)
		printf("파일 못연다");

	printf("%s %d %s\n", "CHA", 13103202, "159-4434-8175");
	printf("%s %d %s\n", "ME", 11351343, "123-4567-8901");
	fprintf(fw, "%s %d %s\n", "CHA", 13103202, "159-4434-8175");
	fprintf(fw, "%s %d %s\n", "ME", 11351343, "123-4567-8901");
	fclose(fw);
}
