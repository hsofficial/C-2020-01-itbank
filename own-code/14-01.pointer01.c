#include<stdio.h>

void main() {
	int num1 = 10, num2;
	int* ptr;
	// 특정 변수의 주소를 저장할 포인터 변수(4byte)를 생성
	//x64>8bytes
	//int* ptr == int *ptr

	ptr = &num1;
	// ptr은 포인터 변수이기 때문에 꼭 주소값을 대입
	// & 기호는 변수앞에 붙어 그 변수의 시작주소 값을 의미

	printf("num1 address : %p\n", &num1);
	printf("num1의 주소를 저장한 ptr의 값 : %p\n\n", ptr);
	//주소값 계속 변함(Vista~)
	//WinXP까지 : 주소값 고정

	printf("num1의 값 : %d\n", num1);
	printf("num1을 가리키는 *ptr의 값 : %d\n\n", *ptr);

	ptr = &num2;
	//포인터 연결 주소값을 num2로 변경
	
	printf("num1 address : %p\n", &num1);
	printf("num2 address : %p\n", &num2);
	printf("ptr address : %p\n\n", ptr);
	
	*ptr = 20;
	// ptr이 가리키는 num2의 주소를 찾아가 20 대입

	printf("change value > *ptr\n");
	printf("num1 : %d\n", num1);
	printf("num2 : %d\n", num2);
}