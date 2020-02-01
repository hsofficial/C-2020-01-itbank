#include<stdio.h>

//input F output F
void sum() {
	int x = 1, y = 2, result;
	result = x + y;
	printf("sum() 함수 호출 후 값 : %d\n", result);
}
void main() {
	sum();
}