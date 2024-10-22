#include <stdio.h>

void split_time(long total_sec, int *hour, int *minute, int *second)
{
	*second = total_sec % 60;
	*minute = total_sec / 60 % 60;
	*hour = total_sec / 60 / 60;
}

int main(void)
{
	long total_sec = 6325;
	int hour, minute, second;
	split_time(total_sec, &hour, &minute, &second);
	printf("hour = %d, minute = %d, second = %d\n", hour, minute, second);
	return 0;
}

