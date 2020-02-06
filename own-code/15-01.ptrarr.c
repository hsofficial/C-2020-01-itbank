#include<stdio.h>

void main() {
	int a = 10, b[5] = { 1,2,3,4,5 };
	int* p;

	p = &a;
	printf("(1) a = %d, *p = %d\n", a, *p);

	printf("(2) b[0] = %d, *(b) = %d\n", b[0], *b);
	printf("(3) b[1] = %d, *(b + 1) = %d\n", b[1], *(b + 1));
	//불가능>>b = b + 1; , b++; , ...
	//array 시작주소 값 = 상수(불변)
	//값 변경 연산 불가

	p = b;
	printf("(4) *p = %d, *(p + 1) = %d\n", *p, *(p + 1));

	p = p + 1;
	printf("(5) *p = %d, *(p + 1) = %d\n", *p, *(p + 1));
	//array 시작주소 연산시 pointer에 주소 저장후 연산가능
}