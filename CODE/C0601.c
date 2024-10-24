/*ººÅµËþ*/
#include <stdio.h>

void hanoi(int n, char a, char c, char b)
{
	if (n == 1) {
		printf("%c --> %c\n", a, c);
		return;
	}
	hanoi(n - 1, a, b, c);
	hanoi(1, a, c, b);
	hanoi(n - 1, b, c, a);
}

int main(void)
{
	int n = 4;
	//scanf("%d", &n);
	hanoi(n, 'A', 'C', 'B');
	return 0;
}

