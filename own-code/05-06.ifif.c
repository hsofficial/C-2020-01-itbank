#include<stdio.h>

void main() {
	int num;
	printf("���� �Է� : ");
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("2���\n");

		if (num % 3 ==0)
		{
			printf("2, 3 �����\n");
		}
	}

	if (num % 2 == 0 && num % 3 == 0) {
		printf("%d�� ¦�� �Դϴ�.\n", num);
	}
}