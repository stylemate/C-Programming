# include <stdio.h>
# include <ctype.h>



void main(void)
{
	int input, gr;
	char ch;
	printf("\n\n(1) 당신이 입력한 숫자가 홀수일까요 짝수일까요: ");
	scanf("%d", &input);
	getchar();
	
	if (input%2 == 0)
		printf("%d는(은) 짝수입니다\n\n\n", input);
	else
		printf("%d는(은) 홀수입니다\n\n\n", input);


	printf("(2) 문자를 써보세요: ");
	ch= getchar();	
	
	
	if (isalpha(ch) !=0 )
		printf("%c 는(은) 알파벳입니다\n", ch);
	else 
		printf("%c 는(은) 알파벳이 아닙니다\n", ch);


	printf("(3) 점수를 넣어보세요: ");
	scanf("%d", &gr);
	getchar();
	
	if (gr>=90)
		printf("%d점은 A를 받아요!\n", gr);
	else if (gr >=80)
		printf("%d점은 B를 받네요\n", gr);
	else if (gr >= 70)
		printf("%d점은 C를 받네?\n", gr);
	else if (gr >= 60)
		printf("%d점은 D네 ㅋㅋ\n", gr);
	else
		printf("%d점? 뭐했냐?\n", gr);	


	printf("(4) 스위치를 이용한 홀수 짝수 검사. 써봐: ");
	scanf("%d", &input);
	getchar();

	switch (input%2)
	{	
		case 0:
			printf("%d 는(은) 짝수\n", input);
		break;
		case 1:
			printf("%d 는(은) 홀수\n", input);
		break;
	}


	printf("(5) 스위치를 이용한 문자 숫자 검사. 써봐: ");
	ch=getchar();
	
	switch (isalpha(ch))
	{
		case 0:
			puts("숫자임 ㅋ");
		break;
		case 1:
			puts("문자임 ㅋ");
		break;
		case 2:
			puts("문자임 ㅋ");
		break;
		default:
			puts("뭘 넣은거야?");
	}
}
