#pragma once
#ifndef __AVG__		// ��������� �̸��� �����Ҳ��� ���� �ߺ��Ǵ� �̸��� ������ ������� �ʰڴ�
#define __AVG__		// ��������� �̸�
#include<stdio.h>

double avg(int x, int y) {
	double f;
	f = (x + y) / 2.0;
	return f;
}

double divi(int x, int y) {
	double f;
	f = x / y;
	return f;
}

int sum(int x, int y) {
	int f = x + y;
	return f;
}

int minus(int x, int y) {
	int f = x - y;
	return f;
}

int mul(int x, int y) {
	int f = x * y;
	return f;
}

void show_avg(int x, int y, double f) {
	printf("%d�� %d�� ��հ��� %.2lf�Դϴ�.\n", x, y, f);
}

int Quotient(int x, int y) {
	return x / y;	//	������ ����� ��ȯ  ==>  �ڽ��� ȣ���� ������
}

int Remainder(int x, int y) {
	return x % y;
}

void IntDivide(int x, int y) {
	printf("%d / %d �� �� : %d\n", x, y, Quotient(x, y));	// Quotient() �Լ��� ȣ��
	printf("%d / %d �� ������ : %d\n", x, y, Remainder(x, y));	//Remainder() �Լ��� ȣ��
}

int compare(int x, int y) {
	if (x > y)
		return x;
	else if (x < y)
		return y;
	else
		return 0;
}

void EvenOdd(int x) {
	int chk = x % 2;

	if (chk == 0)
		printf("even number\n");
	else
		printf("odd number\n");
}

int Avalue() {
	int x;
	printf("input num : ");
	scanf_s("%d", &x);

	if (x >= 0)
		return x;
	else
		return -x;
}

void ThreeMul() {
	int x, y, cnt;
	printf("input range [1] ~ [2] : ");
	scanf_s("%d%d", &x, &y);

	if (x > y)
		printf("err : ������, ū�� ������� �Է����ּ���\n");
	else
	{
		while (x <= y)
		{
			if (x % 3 == 0)
				printf("%d ", x);

			x++;
		}
		printf("fin\n");
	}

}

void Reverse(int x) {
	do{
		printf("%d", x % 10);
		x = x / 10;
	} while (x);
	printf("\n");
}

#endif // !__AVG__
