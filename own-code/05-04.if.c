#include<stdio.h>

void main() {
	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("%d�� ¦�� �Դϴ�.\n", num);
	}

	printf("����� if�� �ٱ�\n");
}