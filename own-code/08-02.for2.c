#include<stdio.h>

void main() {
	int num = 1, sum = 0;

	for (; num <= 10;) {
		printf("%d ", num);
		sum += num;
		num++;
	}
	// �ʱⰪ�� ���� �� ���� ���� ����
	// ���� ����� ���� while�� ����

	printf("sum = %d\n", sum);
	printf("\n");

	int num1 = 1;
	int sum1 = 0;
	for (;;) {	// ��� ������ ���ѹݺ� => while(1)
		printf("%d ", num1);
		sum1 += num1;
		num1++;
		if (num1 == 11) {	// ���ǹ��� ���� break�� Ż���ؾ� �Ѵ�
			break;
		}
	}
	printf("sum1 = %d\n", sum1);
	printf("\n");
}