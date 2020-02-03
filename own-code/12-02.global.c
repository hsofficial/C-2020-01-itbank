#include<stdio.h>

int num1, num2;		// 전역 변수 : 프로그램 전체 통용되는 변수

void func() {
	num1 += 10;
	num2 += 20;
	printf("func() 함수 내의 num1 : %d\n", num1);
	printf("func() 함수 내의 num2 : %d\n", num2);
}

void main() {

	printf("두 정수 입력 : ");
	scanf_s("%d%d", &num1, &num2);

	printf("func() 함수 호출 전의 num1 : %d\n", num1);
	printf("func() 함수 호출 전의 num2 : %d\n", num2);

	func();

	printf("func() 함수 호출 후의 num1 : %d\n", num1);
	printf("func() 함수 호출 후의 num2 : %d\n", num2);
}