#include<stdio.h>
#include"11-03.header.h"

void main() {
	int num1, num2;
	printf("나눌 두 수 입력 : ");
	scanf_s("%d%d", &num1, &num2);
	IntDivide(num1, num2);
	printf("\n");
}