#include<stdio.h>
#include "15-03-01.swap.h"

void main() {
	int arr[5] = { 10,40,30,20,50 };
	// arr �迭���� 40�� 20�� ���� ���� �ٲټ��� (����� �ִ� swap�� ����ؼ�)
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