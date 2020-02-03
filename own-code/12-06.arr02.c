#include<stdio.h>

void main() {
	int array[10];	// 값을 아무것도 넣지않고(초기화x), 10개의 공간만 만듦

	for (int i = 0; i < 10; i++)
		array[i] = (i + 1);

	for (int i = 0; i < 10; i++)
		printf("arr[%d] = %d\n", i, array[i]);

	for (size_t i = 0; i < 10; i++)
	{
		printf("%d번째 수를 입력해 주세요 : ", i+1);
		scanf_s("%d", &array[i]);
	}

	for (int i = 0; i < 10; i++)
		printf("arr[%d] = %d\n", i, array[i]);

}