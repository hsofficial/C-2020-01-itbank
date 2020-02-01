#include<stdio.h>

void main() {
	int num;
	printf("정수 입력 : ");
	scanf_s("%d", &num);

	if (num >= 0) {
		if (num % 2 == 0) {
			printf("%d는 양의 짝수\n", num);
		}
		else {
			printf("%d는 양의 홀수\n", num);
		}
	}
	else {
		printf("%d는 음수\n", num);
	}

	printf("if else fin\n");
}