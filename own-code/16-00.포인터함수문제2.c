#include<stdio.h>

void funcSum(int* num1, int* sum) {
	for (int i = 1; i <= *num1; i++) {
		*sum += i;
	}
}

void main() {
	int num1, sum = 0;
	printf("���� �Է� : ");
	scanf_s("%d", &num1);

	funcSum(&num1, &sum);
	// �ּҰ��� �����ϱ� ������
	// �ش� �Լ����� ���� �ٲ��, main�� ������ ���� �ٲ��

	printf("1 ~ %d���� �� : %d\n", num1, sum);
}