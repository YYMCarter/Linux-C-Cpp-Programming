#include <stdio.h>

int main(void)
{
	int initial_balance;
	int interest_rate;
	int number_of_years;
	printf("Enter initial balance: ");
	scanf("%d", &initial_balance);
	printf("Enter interest rate: ");
	scanf("%d", &interest_rate);
	printf("Enter number of years: ");
	scanf("%d", &number_of_years);
	printf("%5s%6s%7s%7s%7s%7s\n", "Years", "6%", "7%", "8%", "9%", "10%");
	int count = 1;
	for (int i = 0; i < number_of_years; i++)
	{
		printf("  %-5d", count);
		for (int i = interest_rate; i < interest_rate + 5; i++)
		{
			int n = count;
			float cur_balance = initial_balance;
			while (n--) {
				cur_balance = cur_balance * (1 + 0.01 * i);
			}
			printf("%.2f ", cur_balance);
		}
		printf("\n");
		count++;
	}
	return 0;
}

