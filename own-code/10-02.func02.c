#include<stdio.h>

void main() {
	int num1 = 1, num2 = 2;
	sum(num1, num2);
}

//input T output F
void sum(int x, int y) {
	int result;
	result = x + y;
	printf("res : %d\n", result);
}