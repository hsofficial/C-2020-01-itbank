#include <stdio.h>
#include<stdlib.h>

void main() {
	int menu;

	while (1)
	{
		printf("1. ex[N] = N\n");
		printf("======================================\n");
		printf(" ��ȣ�� �����ϼ���[����-> 0] : ");
		scanf("%d", &menu);

		if (menu == 0)
			return;

		switch (menu)
		{
		case 1:
			system("cls");
			ex1();
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			ex2();
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			ex3();
			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");
			ex4();
			system("pause");
			system("cls");
			break;
		case 5:
			system("cls");
			ex5();
			system("pause");
			system("cls");
			break;

		default:
			printf(" %d �� �޴��� ���� ��ȣ�Դϴ�. \n", menu);

		}
	}

	return 0;
}

ex1(void) {
	int num1 = 20, num2 = 3;

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d X %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);
}

ex2(void) {
	//���Կ�����

	int num1 = 20;

	printf("num1 before num1 += 5 : %d\n", num1);
	num1 += 5;	//num1 = num1 + 5
	printf("num1 after num1 += 5 : %d\n", num1);
	num1 -= 4;	//num1 = num1 - 4
	printf("num1 after num1 -= 4 : %d\n", num1);
	num1 *= 2;	//num1 = num1 * 2
	printf("num1 after num1 *= 2 : %d\n", num1);
	num1 /= 2;	//num1 = num1 / 2
	printf("num1 after num1 /= 2 : %d\n", num1);
	num1 %= 5;	//num1 = num1 % 5
	printf("num1 after num1 %= 5 : %d\n", num1);

}

ex3(void) {
	//���迬����
	double num1 = 3.01, num2 = 3.0;

	//TRUE==0, FALSE==1
	printf("num1 < num2 = %d\n", num1 < num2);
	printf("num1 > num2 = %d\n", num1 > num2);
	printf("num1 <= num2 = %d\n", num1 <= num2);
	printf("num1 >= num2 = %d\n", num1 >= num2);
	printf("num1 == num2 = %d\n", num1 == num2);
	printf("num1 != num2 = %d\n\n", num1 != num2);

	double num3 = 4.0, num4 = 4.0;
	printf("num3 == num4 = %d\n", num3 == num4);
	printf("num3 != num4 = %d\n\n", num3 != num4);
}

ex4(void) {
	//����������
	int num1, num2, num3;

	num1 = 10;
	num2 = ++num1;
	/*
	��ġ : num1�� ���� ����->num2 ����
	���� �� �ٸ� �����ڸ� ����
	10���� 11�� ���� �� ����
	*/

	num1 = 10;
	num3 = num1++;
	
	/*
	��ġ : num3�� ����->����
	�ٸ� �����ڸ� ���� �� ����
	10�� num3�� ���� �� ����
	(for cnt variable)
	*/

	printf("num[1] [2] [3] = %d %d %d\n", num1, num2, num3);

}

ex5(void) {
	//��������-1
	int num1 = 2, num2 = 3, num3 = 5, result = 3;

	printf("result�� �� : %d\n", (num1 > 0) && (num2 < 10));
	//�Ѵ� ���϶��� ����
	printf("result�� �� : %d\n", (num2 <= 0) || (num3 > 10));
	//�Ѵ� �����϶��� ����
	printf("result�� �� : %d\n", !result);
	//����������

	printf("result�� �� : %d\n", (num1 > 0) && (num2 < 10)); 
	// �� ��
	printf("result�� �� : %d\n", (num1 < 0) && (num2 < 10)); 
	// ���� ��
	printf("result�� �� : %d\n", (num2 <= 0) || (num3 > 10)); 
	// ���� ����
	printf("result�� �� : %d\n", (num2 <= 0) || (num3 < 10)); 
	// ���� ��
}