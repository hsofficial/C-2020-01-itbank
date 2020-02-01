#include<stdio.h>

void main() {
	int num1, num2, i, j;

	for (num1 = 1; num1 <= 5; num1++)
	{
		printf("num1 : %d\t", num1);

		for (num2 = 0; num2 <= 5; num2++)
		{
			printf("num2 : %d ", num2);
		}
		printf("\n");
	}

	for (i = 0; i <= 20; i += 5)
	{
		for (j = 1; j <= 5; j++)
		{
			printf("%2d\t", i+j);
		}
		printf("\n");
	}

}