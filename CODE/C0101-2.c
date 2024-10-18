#include <stdio.h>

int main(void)
{
	float float_num;
	scanf("%f", &float_num);
	float_num = float_num * 100;
	printf("%.1f%%\n", float_num);
	return 0;
}
