#include<stdio.h>

void main() {
	printf("Hello \n");
	int num1 = 1, num2 = 2, res;
	res = sum(num1, num2);
	printf("res func sum() : %d\n", res);
}

//input T output T
int sum(int x, int y) {
	int result;
	result = x + y;
	return result;	//¹İÈ¯
}