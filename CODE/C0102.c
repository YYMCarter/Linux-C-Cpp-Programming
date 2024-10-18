#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char line[100];
	fgets(line, sizeof(line), stdin);
	int count_digit = 0;
	int count_alpha = 0;
	int i = 0;
	while (line[i]) {
		if (isdigit(line[i])) {
			count_digit++;
		}
		else if (isalpha(line[i])) {
			count_alpha++;
		}
		i++;
	}
	printf("digit: %d, alpha: %d\n", count_digit, count_alpha);
	return 0;
}

