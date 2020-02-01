#include<stdio.h>

void main() {
	int num;
	printf("정수 입력 : ");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("%d는 짝수 입니다.\n", num);
	}

	printf("여기는 if문 바깥\n");
}