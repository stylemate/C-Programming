#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void psr();
void lc();

void main()
{
	int choice;

	system("clear");
	
	printf("===Welcome to Cha's weird Program. Dongsun is stupid===\n");
	printf("Choose a task\n");
	printf("1) Paper Scissor Rock\n");
	printf("2) Line Count\n");
	scanf("%d", &choice);

	if (choice == 1)
		psr();
	else if (choice == 2)
		lc();
	else 
		printf("숫자 제대로 넣어\n");
}

void psr()
{
	int com, user;
	int re;

	srand(time(0));
	com = (rand()%3)+1;
	
	system("clear");

	printf("가위바위보 프로그램입니다\n\n");
	printf("당신의 선택은?\n");
	printf("1) 가위\n");
	printf("2) 바위\n");
	printf("3) 보\n\n");

	printf("입력:");
	scanf("%d", &user);
	
	if (user == 1 && com == 1)
		printf("\n가위 vs 가위\n비겼습니다\n");
	else if (user == 1 && com == 2)
		printf("\n가위 vs 바위\n졌습니다\n");
	else if (user == 1 && com == 3)
		printf("\n가위 vs 보\n이겼습니다\n");
	
	else if (user == 2 && com == 1)
		printf("\n바위 vs 가위\n이겼습니다\n");
	else if (user == 2 && com == 2)
		printf("\n바위 vs 바위\n비겼습니다\n");
	else if (user == 2 && com == 3)
		printf("\n바위 vs 보\n졌습니다\n");

	else if (user == 3 && com == 1)
		printf("\n보 vs 가위\n졌습니다\n");
	else if (user == 3 && com == 2)
		printf("\n보 vs 바위\n이겼습니다\n");
	else if (user == 3 && com == 3)
		printf("\n보 vs 보\n비겼습니다\n");
	else 
		printf("숫자를 제대로 넣으셔야죠 고갱님\n");

	printf("\n\n다시 하시겠습니까?\n");
	printf("1) 가위바위보 반복\n");
	printf("2) 메인으로 나가기\n");
	printf("3) 프로그램 끝내기\n");
	scanf("%d", &re);

	if (re == 1)
		psr();
	else if (re == 2)
		main();
	else if (re == 3)
		printf("바이바이~\n");
	else 
		printf("숫자를 제대로 넣으셔야죠 고갱님\n");
}
void lc()
{
	int count, number = 0;
	int re;

	system("clear");
	printf("라인을 카운트하는 프로그램\n");
	printf("EOF 를 누르면 끝냅니다 (Ctrl+D)\n");

	while ((count = getchar()) != EOF)
		if (count == '\n')
			 ++number;
		printf("%d만큼의 줄이 있습니다.\n", number);

	printf("\n\n다시 하시겠습니까?\n");
	printf("1) 줄세기 반복\n");
	printf("2) 메인으로 나가기\n");
	printf("3) 프로그램 끝내기\n");
	scanf("%d", &re);

	if (re == 1)
		lc();
	else if (re == 2)
		main();
	else if (re == 3)
		printf("바이바이~\n");
	else
		printf("숫자를 제대로 넣으셔야죠 고갱님\n");
}
