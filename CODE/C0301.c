/*ÄêÀú*/
#include <stdio.h>
typedef int bool;
#define true 1
#define false 0

int arr[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool is_Leap_Year(int year)
{
	return year % 400 == 0 || year % 4 == 0 && year % 100 != 0;
}

int main(void)
{

	return 0;
}

