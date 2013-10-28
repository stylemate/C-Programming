#include <stdio.h>

int main (void)
{
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;

	printf("매일 하루하루의 최저기온을 적어주세요. \n");
	printf("섭씨단위를 사용해주시고 q 를 눌러 끝내주세요. \n");
	
	while (scanf("%f", &temperature) == 1)
	{
		all_days++;
		if (temperature < FREEZING)
			cold_days++;
	}
	
	if (all_days != 0)
		printf("%d 날들중 %.1f%% 의 날들이 영하의 기온을 가지고 있습니다. \n",
			all_days, 100.0 * (float) cold_days / all_days);
	if (all_days == 0)
		printf("안씀? \n");

	return 0;
}
