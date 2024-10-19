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
	for (int i = 1; i < year; i++)
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
	sum = sum + day;
	return sum;
}

int main(void)
{
	int year, month, day;
	int year2, month2, day2;
	scanf("%d/%d/%d", &year, &month, &day);
	scanf("%d/%d/%d", &year2, &month2, &day2);
	int sum1 = cal_sum_day(year, month, day);
	int sum2 = cal_sum_day(year2, month2, day2);
	int res;
	if (sum1 > sum2) {
		res = sum1 - sum2;
	}
	else {
		res = sum2 - sum1;
	}
	printf("Ïà¸ô %d Ìì\n", res);
	return 0;
}

