#include<stdio.h>

void main() {
	int result;
	result = sum();

	printf("sum 함수 호출 후 값 : %d\n", result);
	//리턴값 저장후 출력

	printf("sum 함수 호출 후 값 : %d\n", sum());
	//변수저장 생략
}

//input F output T
int sum() {
	int x = 1, y = 2, result;
	//입력을 함수 안에서 진행
	result = x + y;
	return result;
}
