#include <stdio.h>

void main() {
	int num1 = 9, num2 = 2;
	printf("num1 + num2 = %d\n", num1 + num2);
	printf("num1 [percent] num2 = %d\n", num1 % num2);
	printf("num1 / num2 = %d\n\n", num1 / num2);
	/*
	������ / ������ = ����
	������ / �Ǽ��� = �Ǽ�
	�Ǽ��� / ������ = �Ǽ�
	�Ǽ��� / �Ǽ��� = �Ǽ�
	������ ����
	*/
	printf("num1 / num2 = [double]%.2f\n", (double) num1 / num2);
}