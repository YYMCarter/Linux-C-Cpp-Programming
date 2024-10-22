#include <stdio.h>

int max_min(int *arr, int len, int *pmin)
{
	int max_value = *arr;
	*pmin = *arr;
	arr++;
	len--;
	while (len--) {
		if (*arr > max_value) {
			max_value = *arr;
		}
		if (*arr < *pmin) {
			*pmin = *arr;
		}
		arr++;
	}
	return max_value;
}

int main(void)
{
	int len = 5;
	int pre_arr[5] = { 2, 4, 3, 6, 5 };
	int *arr = pre_arr;
	int *pmin;
	int max = max_min(arr, len, &pmin);
	printf("%d, %d\n", max, *pmin);//Error
	return 0;
}

