#include<stdio.h>

void func(int num1, int num2) {
	num1 += 10;
	num2 += 20;
	printf("func() �Լ� ���� num1 : %d\n", num1);
	printf("func() �Լ� ���� num2 : %d\n", num2);
}

void main() {
	int num1, num2;
	printf("�� ���� �Է� : ");
	scanf_s("%d%d", &num1, &num2);

	printf("func() �Լ� ȣ�� ���� num1 : %d\n", num1);
	printf("func() �Լ� ȣ�� ���� num2 : %d\n", num2);

	func(num1, num2);	// �Լ� ȣ�� ��� : Call-by-value (�Լ� ȣ��� ���� ����)

	printf("func() �Լ� ȣ�� ���� num1 : %d\n", num1);
	printf("func() �Լ� ȣ�� ���� num2 : %d\n", num2);
}