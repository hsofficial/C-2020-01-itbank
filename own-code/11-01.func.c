#include<stdio.h>

double avg(int, int);
void show_avg(int, int, double);
// 함수의 선언부의 매개변수는 자료형만 적어도 된다

void main() {
	int num1, num2;
	double f;
	printf("두 정수 입력 : ");
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
	printf("%d와 %d의 평균값은 %.2lf입니다.\n", x, y, f);
}