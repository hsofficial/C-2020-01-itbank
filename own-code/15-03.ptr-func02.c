#include<stdio.h>
#include "15-03-01.swap.h"

void main() {
	int num1 = 10, num2 = 20;

	swap(num1, num2);
	//value ����
	//main�� ���� num1 num2�� �Һ�
	printf("after swap > num1 = %d, num2 = %d\n", num1, num2);

	p_swap(&num1, &num2);
	//value's address ����
	//main variable address ����
	//���޹��� func���� ptr�� value ������ main variable ���� �ٲ�
	printf("after p_swap > num1 = %d, num2 = %d\n", num1, num2);

}