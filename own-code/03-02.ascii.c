#include<stdio.h>

void main() {
	char ch = 'A';
	int num = 73;

	printf("A > ASCII : %d\n", ch);
	printf("73 > ASCII : %c\n", num);

	ch = ch + 32;

	printf("A > ASCII + 32 : %c\n\n", ch);

	printf("print all\n");

	for (size_t i = 65; i < 126; i++)
	{
		printf("%c ", i);
	}

}