#include<stdio.h>

void main() {
	int result;
	result = sum();

	printf("sum �Լ� ȣ�� �� �� : %d\n", result);
	//���ϰ� ������ ���

	printf("sum �Լ� ȣ�� �� �� : %d\n", sum());
	//�������� ����
}

//input F output T
int sum() {
	int x = 1, y = 2, result;
	//�Է��� �Լ� �ȿ��� ����
	result = x + y;
	return result;
}
