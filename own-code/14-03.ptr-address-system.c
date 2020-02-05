#include<stdio.h>

void main() {
	int num = 123;
	int* p_num;

	char ch = 'A';
	char* p_ch;

	p_num = &num;
	p_ch = &ch;

	printf("p_ch address= %p\n", p_ch);
	printf("p_num address= %p\n", p_num);

	printf("p_ch-1: %p,  p_ch: %p,  p_ch+1: %p\n", p_ch - 1, p_ch, p_ch + 1);
	// char* : 주소값을 연산해서 접근할 때 char이라고 명시
	//char(1byte)크기만큼 연산
	printf("p_num-1 : %p,  p_num: %p,  p_num+1: %p\n", p_num - 1, p_num, p_num + 1);
	// num* : 주소값을 연산해서 접근할 때 int이라고 명시
	//int(4byte)크기만큼 연산
	
	//자료형 크기만큼 pointer 계산 실시
	//주소를 저장할 포인터변수와 저장될 변수의 자료형 맞춰야 함
}