#include<stdio.h>

// I>T, O>T
int sum(int x, int y) {
	int result;
	result = x + y;
	return result;
}

void main() {
	int num1, num2, result;
	printf("���� �� ���� �Է��ϼ��� : ");
	scanf_s("%d%d", &num1, &num2);

	printf("�հ� : %d\n", sum(num1, num2));
	// �Լ� ȣ�� �� ��ȯ ���� ���� printf�� �ٷ� ���
}