/*ÖÀ÷»×ÓÓÎÏ·*/
#include <stdio.h>

int main(void)
{
	srand(time(NULL));
	int wins = 0, losses = 0;
	while (1) {
		int x, y;
		x = rand() % 6 + 1;
		y = rand() % 6 + 1;
		printf("You rolled: %d\n", x + y);
		if (x + y == 7 || x + y == 11) {
			printf("x = %d, y = %d\n", x, y);
			printf("You win!\n");
			wins++;
		}
		else if (x + y == 2 || x + y == 3 || x + y == 12) {
			printf("You lose!\n");
			losses++;
		}
		int target = x + y;
		printf("Your point is %d\n", target);
		while (1) {
			x = rand() % 6 + 1;
			y = rand() % 6 + 1;
			printf("You roled: %d\n", x + y);
			if (x + y == target) {
				printf("You win!\n");
				wins++;
				break;
			}
			else if (x + y == 7) {
				printf("You lose!\n");
				losses++;
				break;
			}
		}
		printf("\n");
		printf("Play again? ");
		char ch;
		scanf("%c", &ch);
		printf("\n");
		if (ch != 'y' && ch != 'Y') {
			printf("Wins: %d Losses: %d\n", wins, losses);
			break;
		}
	}
	return 0;
}

