#include <stdio.h>
#include <string.h>
typedef struct student
{
	char name[20];
	int math;
	int eng;
	int chn;
	float avg;
}student;

void print(struct student s1);
student set_stu(char n[20], int m, int e, int c);
void update(student* st);

void main()
{
	student s1[5]; 
	int i;
	printf("5명의 학생을 input 받겠습니다\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d번째 학생 이름:", i+1);
		scanf("%s", s1[i].name);
		printf("%d번째 학생 수학 성적:", i+1);
		scanf("%d", &s1[i].math);
		printf("%d번째 학생 영어 성적:", i+1);
		scanf("%d", &s1[i].eng);
		printf("%d번째 학생 한어 성적:", i+1);
		scanf("%d", &s1[i].chn);
		
		print(s1[i]);
	}
	printf("%d 번째 학생 CHA, 80, 100, 120, 입력", i+1);
	s1[i] = set_stu("CHA", 80, 100, 120);
	print(s1[i]);
	update(&s1[i]);
	printf("업데이트 되었습니다\n");
	print(s1[i]);
}

void print(struct student s1)
{
	static int j = 1;
	if( j == 7)
		j--;
	s1.avg = (s1.math + s1.eng + s1.chn)/3;
	printf("\n%d번째 학생 정보\n", j);
	printf("\t이름: %s\n", s1.name);
	printf("\t수학: %d\n", s1.math);
	printf("\t영어: %d\n", s1.eng);
	printf("\t한어: %d\n", s1.chn);
	printf("\t평균: %.2f\n\n\n", s1.avg);
	j++;
}

student set_stu(char n[20], int m, int e, int c)
{
	student temp;
	strcpy(temp.name, n);
	temp.math = m;
	temp.eng = e;
	temp.chn = c;
	return (temp);
}

void update(student* st)
{
	if ((st -> math) < 100)
		st -> math = 100;
	if ((st -> eng) < 100)
		st -> eng = 100;
	if ((st -> chn) < 100)
		st -> chn = 100;
}
