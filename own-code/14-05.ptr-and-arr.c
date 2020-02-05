#include<stdio.h>

void main() {
	int a[5] = { 10,20,30,40,50 };

	for (int i = 0; i < 5; i++) {
		printf("arr[%d] address : %p\n", i, &a[i]);
		printf("arr[%d] value : %d\n\n", i, a[i]);
	}

	printf("#access by adㅇress\n\n");
	for (int i = 0; i < 5; i++) {
		printf("arr[%d] address : %p\n", i, a+i);
		printf("arr[%d] value : %d\n\n", i, *(a+i) );
	}
	//access by address > for melloc()

	int* p_a;
	p_a = a; // 배열의 시작주소를 p_a에 할당

	printf("#access by pointer\n\n");
	for (int i = 0; i < 5; i++) {
		printf("arr[%d] address : %p\n", i, p_a + i);
		printf("arr[%d] value : %d\n\n", i, *(p_a + i));
	}
}
