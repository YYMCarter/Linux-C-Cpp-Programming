#include <stdio.h>

int main(void)
{
	char* arr[13] = { "A", "2", "3", "4", "5", "6", "7",
		"8", "9", "10", "J", "Q", "K" };
	char arr2[4] = { 'A', 'B', 'C', 'D' };
	int n_cards;
	printf("Enter number of cards in hand: ");
	scanf("%d", &n_cards);
	srand(time(NULL));
	while (n_cards--) {
		int x = rand() % 13;
		int y = rand() % 4;
		printf("%s%c ", arr[x], arr2[y]);
	}
	printf("\n");
	return 0;
}

