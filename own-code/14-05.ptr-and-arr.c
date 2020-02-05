#include<stdio.h>

void main() {
	int a[5] = { 10,20,30,40,50 };

	for (int i = 0; i < 5; i++) {
		printf("arr[%d] address : %p\n", i, &a[i]);
		printf("arr[%d] value : %d\n\n", i, a[i]);
	}

	printf("#포인터 변수로 배열 접근\n\n");
	for (int i = 0; i < 5; i++) {
		printf("arr[%d] address : %p\n", i, a+i);
		printf("arr[%d] value : %d\n\n", i, *(a+i) );
	}

	//access by adress > for melloc()
}