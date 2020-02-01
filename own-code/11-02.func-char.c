#include<stdio.h>

char compare(int x, int y);

void main() {
	int num1, num2;
	char size;
	printf("input num : ");
	scanf_s("%d%d", &num1, &num2);
	size = compare(num1, num2);

	if (size == 'Y') {
		printf("%d는 %d 보다 크다\n", num1, num2);
	}
	else if (size == 'N') {
		printf("%d는 %d 보다 작다\n", num1, num2);
	}
	else if (size == '=') {
		printf("%d와 %d는 같다\n", num1, num2);
	}
	else {
		printf("잘못된 입력\n");
	}

}

char compare(int x, int y) {
	if (x > y) {
		return 'Y';
	}
	else if (x < y) {
		return 'N';
	}
	else {
		return '=';
	}
}