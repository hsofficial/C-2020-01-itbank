#include<stdio.h>

void main() {
	char ch;
	int i;
	printf("���� �Է� : ");
	scanf_s("%d", &i);
	// 4�� �Է��ϰ� ����(\n)�� ������ \n�� ���� �Է�

	printf("���� �Է� : ");
	scanf_s("%c", &ch);
	// \n�� �̹� ���ۿ� �ԷµǾ� �־� ch������ ����
	// ����, �Է� ���� �ʰ� �ٷ� �Ѿ�� ��

	scanf_s("%c", &ch);
	// scanf�� �ϳ� �� �Ἥ ���� scanf�� \n�� �Է¹ް�
	// �ٽ� ���۸� ����� ch�� ���Է� �޾Ƽ� ó��

	printf("i = %d\n", i);
	printf("ch = %c\n", ch);
}
/*
���� �Է� : 4
���� �Է� : i = 4
ch =


*/