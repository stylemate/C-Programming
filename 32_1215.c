#include <stdio.h>
#include <time.h>

typedef struct zxcv		//typedef 로 새로운 자료형만들기
{
	char name[20];
	int age;
	int height;
	char dad[20];
	char mom[20];
}horse;				//horse라는 자료형 생성했음

void print(struct zxcv asdf);
void sub();
void timeshow();

void main()
{
	char c;
	sub();
	getchar();
	while(c != 'n' || c != 'N')
	{
		printf("다시한번더?");
		c = getchar();
		if (c == 'y' || c == 'Y')
			main();
		else if (c == 'n' || c == 'N')
			{
				printf("잘가라\n");
				break;
			}
		else
			{
				printf("글자 제대로...\n");
				break;
			}
	}
	timeshow();
}

void sub()
{
	horse h1;		//struct 쓸필요없음 typdef 써서
	printf("말 이름:");
	scanf("%s", h1.name);
	printf("말 나이:");
	scanf("%d", &h1.age);
	printf("말 키:");
	scanf("%d", &h1.height);
	printf("아빠 말 이름:");
	scanf("%s", h1.dad);
	printf("엄마 말 이름:");
	scanf("%s", h1.mom);

	print(h1);
}

void timeshow()
{
	 time_t ltime;
	struct tm *today;
 
	time(&ltime);
	today = localtime(&ltime);
	printf("YEAR:%04d\nMONTH:%02d\nDAY:%02d\nHOUR:%02d\nMIN:%02d\nSEC:%02d\n",
	today->tm_year + 1900,
	today->tm_mon + 1,
	today->tm_mday,
	today->tm_hour,
	today->tm_min,
	today->tm_sec);
}
void print(struct zxcv asdf)
{
	printf("\n\t말 이름: %s\n", asdf.name);
	printf("\t말 나이: %d\n", asdf.age);
	printf("\t말 키: %d\n", asdf.height);
	printf("\t아빠 말 이름: %s\n", asdf.dad);
	printf("\t엄마 말 이름: %s\n", asdf.mom);
}
