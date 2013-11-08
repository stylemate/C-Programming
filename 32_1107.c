#include <stdio.h>

void main()
{
	int input, width, height;
	int h, w, star, line, space;
	int _line, _input, _space, _star;

	printf("1번 나의 직사각형\n");
	printf("숫자를 넣어봐:");
	scanf("%d", &input);

	for(height = 0; height < input; height++)
	{
		for(width = 0; width < input; width++)
			printf("*");
		printf("\n");
	}

	printf("2번 그 뭐시냐 어려운거\n");
	printf("길이 넣어봐:");
	scanf("%d", &h);
	printf("넓이 넣어봐:");
	scanf("%d", &w);

	for(line = h; line > 0; line--)
	{
		for(space = line; space > 1; space--)
			printf(" ");
		for(star = 0; star < w; star++)
			printf("*");
		printf("\n");
	}

	printf("3번 더 어려운거\n");
	printf("라인 몇개? :");
	scanf("%d", &_input);

	for(_line = 1; _line <= _input; _line++)
	{
		for(_space = 0; _space < _line-1; _space++)
			printf(" ");
		for(_star = _input; _star >= _line; _star--)
			printf("*");
		printf("\n");
	}
	
}
