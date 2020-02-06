#include<stdio.h>

void compare(int* x, int* y) {
	if (*x > * y)
		printf("%d은(는) %d보다 큽니다.\n", *x, *y);
	else if (*x < *y)
		printf("%d은(는) %d보다 큽니다.\n", *y, *x);
	else
		printf("%d은(는) %d과 같습니다.\n", *y, *x);
}

void func_sum(int* x) {
	int res = 0;

	for (int i = 1; i <= *x; i++)
		res += i;

	printf("sum from 1 to %d : %d\n", *x, res);
}

void main() {
	int num1, num2;
	char size;
	printf("input 2 numbers : ");
	scanf_s("%d%d", &num1, &num2);
	compare(&num1, &num2);

	int num3;
	printf("input number : ");
	scanf_s("%d", &num3);
	func_sum(&num3);
}

