#include<stdio.h>

void main() {
	char ch;	// 1byte
	int num;	// 4byte
	float fl;	// 4byte
	double dl;	// 8byte

	printf("ch 변수의 크기 : %d\n", sizeof(ch));
	printf("num 변수의 크기 : %d\n", sizeof(num));
	printf("fl 변수의 크기 : %d\n", sizeof(fl));
	printf("dl 변수의 크기 : %d\n", sizeof(dl));
	// sizeof(데이터 or 자료형)
	//자료형이나 데이터의 크기를 정수로 반환(byte단위)

	//콤마연산자
	int a = 0, b = 0, c = 0;
	a = (b = 3, c = 5, b + c);
	// 식을 콤마로 구분하여 좌측부터 수행
	//가장 우측식이 식의 결과가 된다
	printf("a의 값 : %d\n", a);
}