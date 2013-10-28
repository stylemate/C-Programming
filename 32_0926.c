//오늘 나누어 주신 수업내용 중에... 5번하고 6번 하고 "왼쪽" 하고 "오른쪽" 정렬이 뒤바뀐듯 하는데요?
#include <stdio.h>
#define MAX 153

void main()
{
	char a='Z';

	printf("\n \n \n \n \n \n");
	printf("Hello 출력하기 \n \t Hello 옥정윤교슈님\n");
	printf("MAX 의 값은?\n \t %d\n", MAX);
	printf("(1) 숫자 출력 \n \t %d \n", 123);
	printf("(2) 문자 출력 \n \t %c \n", 'A');
	printf("(3) 문자열 출력 \n \t %s \n", "옥정윤 교슈님 사랑합니다");
	printf("(4) 변수값 출력 \n \t %c \n", a);
		//문자열 변수를 선언해보려고 인터넷에서 찾아보기도 했는데 잘 안되더군요
	printf("(5) 숫자 오른쪽 정렬 \n \t %5d \n", 987);
	printf("(6) 숫자 왼쪽 정렬 \n \t %-5d \n", 987);
	printf("(7) 공백 채우기 \n \t %05d \n", 987);
	printf("(8) 소수점 및 반올림 \n \t %.2f \n", 987.6543);
	printf("(9) 탭 삽입 \n \t 탭을 \t 넣어봅시다 \n");
	printf("(10) 행 삽입 \n \t 행을 \n \t 바꿔봅시다 \n");
	printf("(11) 슬래쉬 삽입 \n \t 슬래쉬를 \\ 넣어볼까요? \n");
	printf("(12) 쌍따옴표 삽입 \n \t \"따옴표\"를 넣어봅시다 \n");
}
