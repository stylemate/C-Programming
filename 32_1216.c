#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE* fw;
	FILE* fr;
	FILE* fp;
	char name[32];
	long no;
	char tel_no[15];
	char ary[] = "YUST CECOM\n";
	char ch;

	fw = fopen("text.txt", "w");
	if (fw == NULL)
	{	
		printf("못연다\n");
		exit(0);
	}
	fprintf(fw, "%s %d %s\n", "차형근", 12341234, "12341234");
	fprintf(fw, "%s %d %s\n", "차형은", 12341234, "12341234");
	fclose(fw);

	fr = fopen("text.txt", "r");
	if (fr == NULL)
	{
		printf("못연다\n");
		exit(0);
	}
	while(!feof(fr))
	{
		fscanf(fr,"%32s %ld %15s", name, &no, tel_no);
		printf("*Name: %s\t *No: %ld\t *Tel: %s\n", name, no, tel_no);
	}
	fclose(fr);

	fp = fopen("text.txt", "a");
	if (fp == NULL)
	{
		printf("못연다\n");
		exit(0);
	}
	fputs(ary, fp);
	fputc('\n',fp);
	fclose(fp);
	
	fp = fopen("text.txt", "r+");
	if (fp == NULL)
	{
		printf("못연다\n");
		exit(0);
	}
	
	while((ch = fgetc(fp)) != EOF)
		printf("%c", ch);
	fclose(fp);
}
