#include<stdio.h>

// I>T, O>T
int sum(int x, int y) {
	int result;
	result = x + y;
	return result;
}

void main() {
	int num1, num2, result;
	printf("숫자 두 개를 입력하세요 : ");
	scanf_s("%d%d", &num1, &num2);

	printf("합계 : %d\n", sum(num1, num2));
	// 함수 호출 후 반환 받은 값을 printf로 바로 출력
}