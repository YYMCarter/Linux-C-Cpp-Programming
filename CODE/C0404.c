/*Ñî»ÔÈı½Ç*/
#include <stdio.h>

int arr[101][101];
int main(void)
{
	for (int i = 1; i <= 10; i++)
	{
		arr[i][1] = 1;
	}
	for (int i = 2; i <= 10; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

