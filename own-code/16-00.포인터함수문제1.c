#include<stdio.h>

void compare(int* p_num1, int* p_num2) {
	// ���޵Ǵ� ���� �ּ��̱� ������ �޴� �Ű����� Ÿ���� ������ �����̴�
	if (*p_num1 > *p_num2) {
		printf("ū���� %d�Դϴ�\n", *p_num1);
	}
	else if (*p_num1 < *p_num2) {
		printf("ū���� %d�Դϴ�\n", *p_num2);
	}
	else {
		printf("�� ���� �����ϴ�\n");
	}
}

void main() {
	int num1, num2;
	printf("�� ���� �Է� : ");
	scanf_s("%d%d", &num1, &num2);

	compare(&num1, &num2);
	// �Լ��� �����ϴ� �������ڰ��� ������ �ּҰ��̴�
}