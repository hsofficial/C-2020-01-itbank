#include<stdio.h>

void main() {
	char ch; int i;
	printf("���� �Է� : ");
	scanf_s("%d", &i);
	printf("���� �Է� : ");
	scanf_s("%c", &ch);

	ch = getchar();
	// getchar() : ���ۿ� �ִ� ���ڸ� ����
	//���ۿ� �ִ� ���ڸ� ������ ����

	printf("i = %d\n", i);
	putchar(ch);
	// putchar() : ������ ���� ���
	//���ۿ� �ִ� ���ڸ� ������ ����
}