#include <stdio.h>

int main(void)
{
	int numerator, numerator2, numerator3;      //����1,2,3
	int denominator, denominator2, denominator3;//��ĸ1,2,3
	printf("Enter first fraction: ");
	scanf("%d/%d", &numerator, &denominator);
	printf("Enter second fraction: ");
	scanf("%d/%d", &numerator2, &denominator2);
	denominator3 = denominator * denominator2;
	numerator3 = numerator * denominator2 + numerator2 * denominator;
	/*����ŷ������㷨�����Լ�������з�����*/
	/*...*/
	printf("The sum is %d/%d\n", numerator3, denominator3);
	return 0;
}

