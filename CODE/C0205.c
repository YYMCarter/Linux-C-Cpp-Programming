#include <stdio.h>
typedef int bool;
#define true 1
#define false 0

int arr[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool is_Leap_Year(int year)
{
	return year % 400 == 0 || year % 4 == 0 && year % 100 != 0;
}

int cal_sum_day(int year, int month, int day)
{
	int sum = 0;
	for (int i = 1970; i < year; i++)
	{
		if (is_Leap_Year(i)) {
			sum = sum + 366;
		}
		else {
			sum = sum + 365;
		}
	}
	if (is_Leap_Year(year)) {
		arr[2] = 29;
	}
	else {
		arr[2] = 28;
	}
	for (int i = 1; i < month; i++)
	{
		sum = sum + arr[i];
	}
	sum = sum + day - 1;
	return sum;
}

int main(void)
{
	int year, month, day;
	scanf("%d/%d/%d", &year, &month, &day);
	int sum = cal_sum_day(year, month, day);
	int res = sum % 7;
	switch (res)
	{
	case 0:
		printf("星期四\n");
		break;
	case 1:
		printf("星期五\n");
		break;
	case 2:
		printf("星期六\n");
		break;
	case 3:
		printf("星期日\n");
		break;
	case 4:
		printf("星期一\n");
		break;
	case 5:
		printf("星期三\n");
		break;
	case 6:
		printf("星期四\n");
		break;
	}
	return 0;
}

