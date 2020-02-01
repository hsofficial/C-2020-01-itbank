#include <stdio.h>

void main() {
	int num;

	printf("input num : ");
	scanf_s("%d", &num);
	// 삼항 연산자
	// (조건식) ? 참일경우실행코드 : 거짓일경우실행코드
	(num % 2 == 0) ? printf("%d는 짝수\n", num)
		: printf("%d는 홀수", num);


}