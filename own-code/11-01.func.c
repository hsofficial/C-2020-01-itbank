#include<stdio.h>

double avg(int, int);
void show_avg(int, int, double);
// �Լ��� ������� �Ű������� �ڷ����� ��� �ȴ�

void main() {
	int num1, num2;
	double f;
	printf("�� ���� �Է� : ");
	scanf_s("%d%d", &num1, &num2);
	f = avg(num1, num2);
	show_avg(num1, num2, f);

}

double avg(int x, int y) {
	double f;
	f = (double)(x + y) / 2;
	return f;
}

void show_avg(int x, int y, double f) {
	printf("%d�� %d�� ��հ��� %.2lf�Դϴ�.\n", x, y, f);
}