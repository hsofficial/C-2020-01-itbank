#include<stdio.h>

void main() {
	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num >= 0) {
		if (num % 2 == 0) {
			printf("%d�� ���� ¦��\n", num);
		}
		else {
			printf("%d�� ���� Ȧ��\n", num);
		}
	}
	else {
		printf("%d�� ����\n", num);
	}

	printf("if else fin\n");
}