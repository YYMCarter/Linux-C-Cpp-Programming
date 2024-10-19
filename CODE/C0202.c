#include <stdio.h>
typedef int bool;
#define true 1
#define false 0

bool is_Leap_Year(int year)
{
	return year % 400 == 0 || year % 4 == 0 && year % 100 != 0;
}

int main(void)
{
	int year;
	scanf("%d", &year);
	bool flag = is_Leap_Year(year);
	if (flag) {
		printf("Is Leap Year.\n");
	}
	else {
		printf("Is not Leap Year.\n");
	}
	return 0;
}

