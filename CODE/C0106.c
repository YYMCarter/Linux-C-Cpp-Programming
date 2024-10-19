#include <stdio.h>

void print_menu()
{
	printf("\n");
	printf("======= 记账程序菜单 =======\n");
	printf("0. 清空账户余额\n");
	printf("1. 往账户上存钱\n");
	printf("2. 从账户上取钱\n");
	printf("3. 显示当前余额\n");
	printf("4. 退出程序\n");
	printf("请选择操作（0-4）：");
}

int main(void)
{
	float balance = 0; //余额
	int flag = 1;
	while (flag) {
		print_menu();
		int choice;
		scanf("%d", &choice);
		float num; //存取款金额
		switch (choice)
		{
		case 0:
			balance = 0;
			break;
		case 1:
			printf("请输入存款金额：");
			scanf("%f", &num);
			balance = balance + num;
			printf("成功存款 %.2f 元\n", num);
			break;
		case 2:
			printf("请输入取款金额：");
			scanf("%f", &num);
			balance = balance - num;
			printf("成功取款 %.2f 元\n", num);
			break;
		case 3:
			printf("当前余额：%.2f 元\n", balance);
			break;
		case 4:
			flag = 0;
			break;
		}
	}
	return 0;
}
