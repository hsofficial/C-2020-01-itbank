#include<stdio.h>

void compare(int* p_num1, int* p_num2) {
	// 전달되는 값이 주소이기 때문에 받는 매개변수 타입은 포인터 변수이다
	if (*p_num1 > *p_num2) {
		printf("큰수는 %d입니다\n", *p_num1);
	}
	else if (*p_num1 < *p_num2) {
		printf("큰수는 %d입니다\n", *p_num2);
	}
	else {
		printf("두 수가 같습니다\n");
	}
}

void main() {
	int num1, num2;
	printf("두 정수 입력 : ");
	scanf_s("%d%d", &num1, &num2);

	compare(&num1, &num2);
	// 함수에 전달하는 전달인자값이 변수의 주소값이다
}