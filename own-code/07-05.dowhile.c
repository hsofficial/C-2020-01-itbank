#include<stdio.h>

void main() {
	int num = 10;

	do {	// ���๮(���ӹ�)�� ���ǹ� ���� ���� ����
		printf("do-while\n");
		printf("num = %d\n", num);
		num++;
	} while (num <= 9);

	while (num <= 9) {	// ������ ���� �Ǻ�
		printf("while\n");
		printf("num = %d\n", num);
		num++;
	}
}
