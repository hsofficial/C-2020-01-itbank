#include<stdio.h>

void convertToUppercase(char* str) {
	if (*str >= 'a' && *str <= 'z') {
		*str -= 32;
	}
}

void main() {
	char str[20];
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", str, sizeof(str));

	printf("��ȯ �� ���ڿ� : %s\n", str);

	convertToUppercase(str);
	// �迭�� �̸��� �迭�� �����ּҸ� �ǹ�
	// ���� �������� ���� �ּҰ��̴�!!!

	printf("��ȯ �� ���ڿ� : %s\n", str);
}