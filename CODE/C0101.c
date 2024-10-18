#include <stdio.h>

int main(void)
{
	int chinese_score, math_score, english_score;
	scanf("%d%d%d", &chinese_score, &math_score, &english_score);
	double average_score = (chinese_score + math_score + english_score) / 3.0;
	printf("%.2f\n", average_score);
	return 0;
}

