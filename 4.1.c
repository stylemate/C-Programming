#include <stdio.h>
#include <string.h>
#define DENSITY 62.4

void main()
{
	float weight, volume;
	int size, letters;
	char name[40];

	printf("안녕하세요 이름이 뭐에요?:");
	scanf("%s", name);

	printf("%s님, 몸무게는 몇근인가요?:", name);
	scanf("%f", &weight);
	
	size= sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;

	printf("흠,%s님, 당신의 부피는 %2.2f cubic feet 군요.\n", name, volume);
	printf("그리고 이름은 %d자 이고요.\n", letters);
	printf("그리고 이름은 %d 만큼의 바이트를 차지하는군요.\n", size);

} 
