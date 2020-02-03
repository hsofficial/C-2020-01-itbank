#include <stdio.h>

void main() {
	int arr[5] = { 1,2,3,4,5 };
	for (size_t i = 0; i < 5; i++)
		printf("arr[%d] = %d\n", i, arr[i]);

	printf("\n");

	arr[0] = 6;
	arr[1] = 7;

	for (size_t i = 0; i < 5; i++)
		printf("arr[%d] = %d\n", i, arr[i]);
}