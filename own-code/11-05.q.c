/*
	C��� �Լ� ȣ���� : Call-by-value = �Լ� ȣ��� ���� ����
*/

#include <stdio.h>
#include<stdlib.h>
#include"11-03.header.h"

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

		case 5:
			system("cls");
			q5();
			system("pause");
			system("cls");
			break;

		default:
			printf(" %d �� �޴��� ���� ��ȣ�Դϴ�. \n", menu);

		}
	}

	return 0;
}

q1() {
	int num1, num2, res;
	printf("input num [1] [2] : ");
	scanf_s("%d%d", &num1, &num2);
	res = compare(num1, num2);
	if (res == 0)
		printf("same number\n");
	else
		printf("bigger number : %d\n", res);
}

q2() {
	int num1;
	printf("input num : ");
	scanf_s("%d", &num1);
	EvenOdd(num1);
}

q3() {
	int res = Avalue();
	printf("���밪 : %d\n", res);
}

q4() {
	ThreeMul();
}

q5() {
	int num1;
	printf("input num : ");
	scanf_s("%d", &num1);
	Reverse(num1);
}