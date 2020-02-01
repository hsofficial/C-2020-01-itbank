#include<stdio.h>	// 표준 라이브러리 (컴파일러 설치시 자동으로 받아지는 헤더파일)
#include"11-03.header.h"	// 사용자 정의 헤더 (사용자가 직접만든 함수등을 나열하는 파일)

void main() {
	int num1, num2;
	double f;
	printf("두 정수 입력 : ");
	scanf_s("%d%d", &num1, &num2);
	f = avg(num1, num2);
	show_avg(num1, num2, f);

}