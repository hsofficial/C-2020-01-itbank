#include<stdio.h>

void convertToUppercase(char* str) {
	if (*str >= 'a' && *str <= 'z') {
		*str -= 32;
	}
}

void main() {
	char str[20];
	printf("문자열을 입력하세요 : ");
	scanf_s("%s", str, sizeof(str));

	printf("변환 전 문자열 : %s\n", str);

	convertToUppercase(str);
	// 배열의 이름은 배열의 시작주소를 의미
	// 따라서 전달인자 값은 주소값이다!!!

	printf("변환 후 문자열 : %s\n", str);
}