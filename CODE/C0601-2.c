/*十进制转换成二进制*/
#include <stdio.h>

void ten_to_two(int number)
{
	if (number <= 0) {
		return;
	}
	ten_to_two(number / 2);
	printf("%d ", number % 2);
}

int main(void)
{
	int number;
	scanf("%d", &number);
	ten_to_two(number);
	printf("\n");
	return 0;
}
