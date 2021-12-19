#include <stdio.h>

main(void)
{
	
	int i;

	int day[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int size = sizeof(day);


	for (i = 0; i < 12; i++)
	{
		printf("2021 %d month has %d days. \n", i + 1, day[i]);
	}

	return 0;
}