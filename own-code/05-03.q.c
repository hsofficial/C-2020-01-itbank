#include <stdio.h>
#include<stdlib.h>

void main() {
	int menu;

	while (1)
	{
		printf("1. q[N] = N\n");
		printf("======================================\n");
		printf(" ��ȣ�� �����ϼ���[����-> 0] : ");
		scanf_s("%d", &menu);

		if (menu == 0)
			return;

		switch (menu)
		{
		case 1:
			system("cls");
			q1();
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			q2();
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			q3();
			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");
			q4();
			system("pause");
			system("cls");
			break;
		
		default:
			printf(" %d �� �޴��� ���� ��ȣ�Դϴ�. \n", menu);

		}
	}

	return 0;
}

q1(void) {
	int num1;
	printf("input num : ");
	scanf_s("%d", &num1);
	(num1 % 2 == 0) ? printf("%d�� ¦��\n", num1) : printf("%d�� Ȧ��\n", num1);
}

q2(void) {
	int num2;
	printf("input num : ");
	scanf_s("%d", &num2);
	(num2 % 3 == 0) ? printf("3�ǹ�� : T\n") : printf("3�ǹ�� : F\n");
}

q3(void) {
	int num3, num4;
	printf("input num[a] [b] : ");
	scanf_s("%d%d", &num3, &num4);
	(num3 > num4) ? printf("big num is %d\n", num3) : printf("big num is %d\n", num4);
}

q4(void) {
	int num5, calc;
	printf("input num : ");
	scanf_s("%d", &num5);

	if (num5 > 0)
	{
		calc = num5;
	}
		
	else
	{
		calc = num5 * (-1);
	}

	printf("���밪 : %d\n", calc);
}
/*
	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	(num < 0) ? printf("%d�� ���밪�� %d�Դϴ�\n", num, -num) :
		printf("%d�� ���밪�� %d�Դϴ�\n", num, num);
*/