#include <stdio.h>
#define BLURB "Authentic imitation!"

void main ()
{
	printf("/%2s/ \n", BLURB);
	printf("/%24s/ \n", BLURB);
	printf("/%24.5s/ \n", BLURB);
	printf("/%-24.5s/ \n", BLURB);
}
