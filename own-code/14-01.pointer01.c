#include<stdio.h>

void main() {
	int num1 = 10, num2;
	int* ptr;
	// Ư�� ������ �ּҸ� ������ ������ ����(4byte)�� ����
	//x64>8bytes
	//int* ptr == int *ptr

	ptr = &num1;
	// ptr�� ������ �����̱� ������ �� �ּҰ��� ����
	// & ��ȣ�� �����տ� �پ� �� ������ �����ּ� ���� �ǹ�

	printf("num1 address : %p\n", &num1);
	printf("num1�� �ּҸ� ������ ptr�� �� : %p\n\n", ptr);
	//�ּҰ� ��� ����(Vista~)
	//WinXP���� : �ּҰ� ����

	printf("num1�� �� : %d\n", num1);
	printf("num1�� ����Ű�� *ptr�� �� : %d\n\n", *ptr);

	ptr = &num2;
	//������ ���� �ּҰ��� num2�� ����
	
	printf("num1 address : %p\n", &num1);
	printf("num2 address : %p\n", &num2);
	printf("ptr address : %p\n\n", ptr);
	
	*ptr = 20;
	// ptr�� ����Ű�� num2�� �ּҸ� ã�ư� 20 ����

	printf("change value > *ptr\n");
	printf("num1 : %d\n", num1);
	printf("num2 : %d\n", num2);
}