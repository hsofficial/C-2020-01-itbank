#include<stdio.h>

void funcSum(int* num1, int* sum) {
	for (int i = 1; i <= *num1; i++) {
		*sum += i;
	}
}

void main() {
	int num1, sum = 0;
	printf("정수 입력 : ");
	scanf_s("%d", &num1);

	funcSum(&num1, &sum);
	// 주소값을 전달하기 때문에
	// 해당 함수에서 값이 바뀌면, main의 변수의 값도 바뀐다

	printf("1 ~ %d까지 합 : %d\n", num1, sum);
}