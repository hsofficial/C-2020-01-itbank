#include<stdio.h>
#include<stdlib.h>

void main() {
	int* ptr;

	ptr = (int*)malloc(sizeof(int));
	// sizeof(int)의 크기만큼 heap영역에 공간할당(생성)
	// 반환 자료형이 정수(int), 주소전달(*) => (int*)
	// 주소반환, 저장할 변수는 포인터(ptr)

	*ptr = 10;	
	// 동적할당된 주소를 찾아가서 10 정수값을 대입

	printf("ptr이 가리키는 주소값 : %p\n", ptr);
	printf("ptr이 가리키는 값 : %d\n", *ptr);

	free(ptr);
	//동적할당 공간 해제
	//해제 하지 않으면 종료 후에도 메모리 상주
}