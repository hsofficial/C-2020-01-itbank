#include <stdio.h>
#include <stdlib.h>

void main() {
	int* ptr = (int*)malloc(sizeof(int));
	//sizeof(int) 크기만큼 heap에 malloc
	//생성한 공간 주소 int형으로 반환
	//주소로 반환되므로 저장 변수는 ptr

	*ptr = 100;
	//ptr 공간에 100 대입

	printf("ptr이 가리키는 값 : %d\n", *ptr);
	printf("ptr이 가리키는 주소 : %p\n", ptr);
	printf("ptr이 가리키는 공간의 크기 : %d byte\n\n", sizeof(*ptr));

	free(ptr);
	//ptr 해제
	printf("ptr이 가리키는 값 : %d\n", *ptr);
	//free 사용>값 사라짐
	printf("ptr이 가리키는 주소 : %p\n", ptr);
	//ptr은 잔존, 주소는 불변
	printf("ptr이 가리키는 공간의 크기 : %d byte\n", sizeof(*ptr));
	//ptr은 int이므로 4byte
}