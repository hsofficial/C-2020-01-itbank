#include<stdio.h>	// ǥ�� ���̺귯�� (�����Ϸ� ��ġ�� �ڵ����� �޾����� �������)
#include"11-03.header.h"	// ����� ���� ��� (����ڰ� �������� �Լ����� �����ϴ� ����)

void main() {
	int num1, num2;
	double f;
	printf("�� ���� �Է� : ");
	scanf_s("%d%d", &num1, &num2);
	f = avg(num1, num2);
	show_avg(num1, num2, f);

}