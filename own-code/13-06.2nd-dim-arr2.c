#include<stdio.h>

void main() {
	int arr[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			arr[i][j] = (i+1) * (j+1);
	}


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("a[%d][%d] = %d  ", i, j, arr[i][j]);
		printf("\n");
	}

	printf("\n");

	int n = 1;
		for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
					arr[i][j] = n++;
			}

	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 5; i++)
			printf("a[%d][%d] = %d  ", i, j, arr[i][j]);
		printf("\n");
	}

	printf("\n");

	int n2 = 1;
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 5; i++)
			arr[i][j] = n2++;
	}

	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 5; i++)
			printf("a[%d][%d] = %d  ", i, j, arr[i][j]);
		printf("\n");
	}
}