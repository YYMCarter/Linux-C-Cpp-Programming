#include <stdio.h>
typedef int bool;
#define true 1
#define false 0

int arr[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool is_Leap_Year(int year)
{
	return year % 400 == 0 || year % 4 == 0 && year % 100 != 0;
}

void print_next_day(int year, int month, int day)
{
	if (month == 2) {
		arr[2] = 28;
	}
	day++;
	if (day > arr[month]) {
		day = 1;
		month++;
		if (month > 12) {
			month = 1;
			year++;
		}
	}
	printf("%dÄê%dÔÂ%dÈÕ\n", year, month, day);
}

int main(void)
{
	int year, month, day;
	scanf("%d/%d/%d", &year, &month, &day);
	print_next_day(year, month, day);
	return 0;
}

