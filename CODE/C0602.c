#include <stdio.h>

void find_two_largest(int arr[], int n, int *largest, int *second_largest)
{
	//C”Ô—‘qsort

}

int main(void)
{
	int arr[] = { 3, 1, 2, 5 };
	int largest, second_largest;
	find_two_largest(arr, 4, &largest, &second_largest);
	printf("%d, %d\n", largest, second_largest);
	return 0;
}

