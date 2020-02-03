#include<stdio.h>

void main() {
	char ch; int i;
	printf("숫자 입력 : ");
	scanf_s("%d", &i);
	printf("문자 입력 : ");
	scanf_s("%c", &ch);

	ch = getchar();
	// getchar() : 버퍼에 있는 문자를 들고옴
	//버퍼에 있는 문자를 변수에 대입

	printf("i = %d\n", i);
	putchar(ch);
	// putchar() : 변수의 문자 출력
	//버퍼에 있는 문자를 변수에 대입
}