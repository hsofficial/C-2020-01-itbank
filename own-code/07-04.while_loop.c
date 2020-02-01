#include<stdio.h>
#include<stdlib.h>

void main() {
	int n, i;
	while (1)
	{
		i = 1;
		printf("input num : ");
		scanf_s("%d", &n);

		if (n == 0)
		{
			printf("stop loop\n");
			break;
		}

		while (i <= 9)
		{
			printf("%d * %d = %d\n", n, i, n * i);
			i++;
		}

		system("pause");
		system("cls");
	}
}