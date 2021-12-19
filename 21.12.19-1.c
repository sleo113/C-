#include <stdio.h>

main(void)
{
	
	int i;

	int day[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int size = sizeof(day);


	for (i = 0; i < 12; i++)
	{
		printf("2021년 %d월은 %d일이 있습니다 \n", i + 1, day[i]);
	}

	return 0;
}