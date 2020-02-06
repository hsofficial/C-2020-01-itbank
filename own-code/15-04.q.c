#include<stdio.h>
#include "15-03-01.swap.h"

void main() {
	int arr[5] = { 10,40,30,20,50 };
	// arr 배열에서 40과 20의 값을 서로 바꾸세요 (헤더에 있는 swap을 사용해서)
	printf("before swap : {");
	for (int i = 0; i < 5; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\b\b}\n");

	p_swap(&arr[1], &arr[3]);

	printf("after swap : {");
	for (int i = 0; i < 5; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\b\b}\n");
}