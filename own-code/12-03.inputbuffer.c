#include<stdio.h>

void main() {
	char ch;
	int i;
	printf("숫자 입력 : ");
	scanf_s("%d", &i);
	// 4를 입력하고 엔터(\n)를 누르면 \n이 같이 입력

	printf("문자 입력 : ");
	scanf_s("%c", &ch);
	// \n이 이미 버퍼에 입력되어 있어 ch변수에 들어간다
	// 따라서, 입력 받지 않고 바로 넘어가게 됨

	scanf_s("%c", &ch);
	// scanf를 하나 더 써서 위의 scanf에 \n을 입력받고
	// 다시 버퍼를 만들어 ch에 재입력 받아서 처리

	printf("i = %d\n", i);
	printf("ch = %c\n", ch);
}
/*
숫자 입력 : 4
문자 입력 : i = 4
ch =


*/