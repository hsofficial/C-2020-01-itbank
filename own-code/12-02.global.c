#include<stdio.h>

int num1, num2;		// ���� ���� : ���α׷� ��ü ���Ǵ� ����

void func() {
	num1 += 10;
	num2 += 20;
	printf("func() �Լ� ���� num1 : %d\n", num1);
	printf("func() �Լ� ���� num2 : %d\n", num2);
}

void main() {

	printf("�� ���� �Է� : ");
	scanf_s("%d%d", &num1, &num2);

	printf("func() �Լ� ȣ�� ���� num1 : %d\n", num1);
	printf("func() �Լ� ȣ�� ���� num2 : %d\n", num2);

	func();

	printf("func() �Լ� ȣ�� ���� num1 : %d\n", num1);
	printf("func() �Լ� ȣ�� ���� num2 : %d\n", num2);
}