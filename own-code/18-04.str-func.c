#include<stdio.h>

int my_strlen(char* str) {
	int count = 0;
	while (*str != NULL) {//str 마지막까지 반복
		str += 1;	//다음 str address 검사
		count += 1;	// 문자를 검사할때 마다 count 값 1씩 증가
	}
	return count;	// 누적된 count값(= 문자개수)를 반환
}

void main() {
	char str[30] = "String Fuction";

	printf("str 문자열 길이 : %d\n", strlen(str));
	printf("str 문자열 크기 : %d\n", sizeof(str));
	// strlen() 은 해당 문자열의 개수를 세어 정수값으로 반환
	// sizeof() 는 해당 변수(배열)의 크기를 정수값으로 반환

	printf("str 문자열 길이(my_strlen) : %d\n", my_strlen(str));
}