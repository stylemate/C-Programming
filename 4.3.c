#include <stdio.h>
#include <string.h>
#define PRAISE "That's a brilliant name my friend!"

void main ()
{
	char name[40];
	
	printf("이름이 뭐에요?");
	scanf("%s", name);
	printf("안녕하세요 %s. %s \n", name, PRAISE);
	printf("Your name of %d letters occupies %d memory cells. \n",
		strlen(name), sizeof name);
	printf("the phrase of praise has %d letters ", strlen (PRAISE));
	printf("and occupies %d memory cells. \n", sizeof PRAISE);

}
/*strlen() stops counting when there is null character in the array.
Justin Cha would be 6*/
