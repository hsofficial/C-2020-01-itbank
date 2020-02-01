#include<stdio.h>

void main() {
	int num = 123;
	char ch = 'A';

	num = num + 1;	//Overwrite
	ch = 'B';

	printf("num = %d\n", num);
	printf("ch = %c\n", ch);
	printf("ch = %d\n", ch);
} 