#include<stdio.h>

char compare(int x, int y);

void main() {
	int num1, num2;
	char size;
	printf("input num : ");
	scanf_s("%d%d", &num1, &num2);
	size = compare(num1, num2);

	if (size == 'Y') {
		printf("%d�� %d ���� ũ��\n", num1, num2);
	}
	else if (size == 'N') {
		printf("%d�� %d ���� �۴�\n", num1, num2);
	}
	else if (size == '=') {
		printf("%d�� %d�� ����\n", num1, num2);
	}
	else {
		printf("�߸��� �Է�\n");
	}

}

char compare(int x, int y) {
	if (x > y) {
		return 'Y';
	}
	else if (x < y) {
		return 'N';
	}
	else {
		return '=';
	}
}