#include<stdio.h>

void main() {
	int num;
	printf("정수 입력 : ");
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("2배수\n");

		if (num % 3 ==0)
		{
			printf("2, 3 공배수\n");
		}
	}

	if (num % 2 == 0 && num % 3 == 0) {
		printf("%d는 짝수 입니다.\n", num);
	}
}