#include <stdio.h>

/*�ݹ����n�Ľ׳�*/
int func(int n)
{
	if (n == 0) {
		return 1;
	}
	return n * func(n - 1);
}

/*ѭ�����n�Ľ׳�*/
int func2(int n)
{
	int res = 1;
	for (int i = 1; i <= n; ++i) {
		res *= i;
	}
	return res;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	int res = func2(n);
	printf("%d\n", res);
	return 0;
}
