#include <stdio.h>

int main(void)
{
	//Ë®ÏÉ»¨Êı
	int count = 0;
	for (int i = 100; i <= 999; i++)
	{
		int tmp = i, j = i;
		int a = j % 10;
		j /= 10;
		int b = j % 10;
		j /= 10;
		int c = j;
		if (tmp == a * a * a + b * b * b + c * c * c) {
			printf("%d\n", tmp);
			count++;
		}
	}
	printf("count: %d\n", count);
	return 0;
}
