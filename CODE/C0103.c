#include <stdio.h>

int is_odd(int num)
{
	if (num % 2) {
		return 1;
	}
	return 0;
}

int is_power_of_2(int n)
{
	double num = n;
	while (num > 1) {
		num /= 2.0;
	}
	if (num == 1) {
		return 1;
	}
	return 0;
}

int Last_Set_Bit(int num)
{
	int count = 0;
	while (num % 2 != 1) {
		num /= 2;
		count++;
	}
	int ret = 1;
	while (count--) {
		ret *= 2;
	}
	return ret;
}

int find_once_num(int nums[], int n)
{
	int num = 0;
	for (int i = 0; i < n; i++) {
		num = num ^ nums[i];
	}
	return num;
}

int main(void)
{
	int flag = is_odd(3);
	if (flag) {
		printf("Is odd.\n");
	}
	else {
		printf("Is not odd.\n");
	}
	flag = is_power_of_2(5);
	if (flag) {
		printf("Is.\n");
	}
	else {
		printf("Is not.\n");
	}
	int num = Last_Set_Bit(24);
	printf("%d\n", num);
	int a = 3, b = 4;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d, b = %d\n", a, b);
	int nums[5] = { 1, 2, 2, 3, 1 };
	int ret = find_once_num(nums, 5);
	printf("%d\n", ret);
	return 0;
}
