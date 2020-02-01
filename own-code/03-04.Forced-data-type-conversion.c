#include <stdio.h>

void main() {
	int num1 = 9, num2 = 2;
	printf("num1 + num2 = %d\n", num1 + num2);
	printf("num1 [percent] num2 = %d\n", num1 % num2);
	printf("num1 / num2 = %d\n\n", num1 / num2);
	/*
	정수형 / 정수형 = 정수
	정수형 / 실수형 = 실수
	실수형 / 정수형 = 실수
	실수형 / 실수형 = 실수
	곱셈도 동일
	*/
	printf("num1 / num2 = [double]%.2f\n", (double) num1 / num2);
}