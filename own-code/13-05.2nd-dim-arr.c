#include<stdio.h>

void main() {
	//arr[행=가로=ln][열=세로=col]
	int arr[4][3] = {
		{ 1,  2,  3},
		{ 4,  5,  6},
		{ 7,  8,  9},
		{10, 11, 12}
	};

	printf("a[0][0] = %d\n", arr[0][0]);
	printf("a[1][1] = %d\n", arr[1][1]);

	//11
	printf("a[3][1] = %d\n", arr[3][1]);
	//9
	printf("a[2][2] = %d\n", arr[2][2]);

	printf("\n");

	int arr2[4][3] = { {1,2,3},{4,5,6},{7,8,9},{10,11,12} };

	//6
	printf("a2[1][2] = %d\n", arr2[1][2]);
	//10
	printf("a2[3][0] = %d\n", arr2[3][0]);

	printf("\n");

	//for-for

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("a2[%d][%d] = %d\n", i, j, arr2[i][j]);
	}
		
}