#include<stdio.h>

void func(int num1, int num2) {
	num1 += 10;
	num2 += 20;
	printf("func() 함수 내의 num1 : %d\n", num1);
	printf("func() 함수 내의 num2 : %d\n", num2);
}

void main() {
	int num1, num2;
	printf("두 정수 입력 : ");
	scanf_s("%d%d", &num1, &num2);

	printf("func() 함수 호출 전의 num1 : %d\n", num1);
	printf("func() 함수 호출 전의 num2 : %d\n", num2);

	func(num1, num2);	// 함수 호출 방식 : Call-by-value (함수 호출시 값을 전달)

	printf("func() 함수 호출 후의 num1 : %d\n", num1);
	printf("func() 함수 호출 후의 num2 : %d\n", num2);
}