#include <stdio.h>

void print_menu()
{
	printf("\n");
	printf("======= ���˳���˵� =======\n");
	printf("0. ����˻����\n");
	printf("1. ���˻��ϴ�Ǯ\n");
	printf("2. ���˻���ȡǮ\n");
	printf("3. ��ʾ��ǰ���\n");
	printf("4. �˳�����\n");
	printf("��ѡ�������0-4����");
}

int main(void)
{
	float balance = 0; //���
	int flag = 1;
	while (flag) {
		print_menu();
		int choice;
		scanf("%d", &choice);
		float num; //��ȡ����
		switch (choice)
		{
		case 0:
			balance = 0;
			break;
		case 1:
			printf("���������");
			scanf("%f", &num);
			balance = balance + num;
			printf("�ɹ���� %.2f Ԫ\n", num);
			break;
		case 2:
			printf("������ȡ���");
			scanf("%f", &num);
			balance = balance - num;
			printf("�ɹ�ȡ�� %.2f Ԫ\n", num);
			break;
		case 3:
			printf("��ǰ��%.2f Ԫ\n", balance);
			break;
		case 4:
			flag = 0;
			break;
		}
	}
	return 0;
}
