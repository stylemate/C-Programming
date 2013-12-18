#include <stdio.h>
#include <stdlib.h>
void main(int argc, char *argv[]) 
{
	FILE* fp;
	char ch;
	if (argc < 2 || argc > 2)
	{
		printf("usage: ./32_viewer filename\n");
		exit(1);
	}
	if ((fp = fopen (argv[1], "r")) == NULL)
	{
		printf("can't open file\n");
		exit(1);
	}
	while ((ch = fgetc(fp)) != EOF)
	{
		printf("%c", ch);
	}
}
