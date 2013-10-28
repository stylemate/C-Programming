#include <stdio.h>

int global;

void main()
{
	int local;
	global = 1;
	local = 2;
	{
		int very_local;
		very_local = global + local;
		printf("%d", very_local);
	}
}
