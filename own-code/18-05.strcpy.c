#include <stdio.h>
#include<string.h>

void main() {
	char str1[30] = "손틈새로 비치는 아이유참좋다"; //28byte
	char str2[20];
	char str3[30];

	//strcpy(str2, str1); 
	// str2의 공간보다 더 긴 문자열이 들어옴
	// => 에러, 혹은 버퍼오버플로우

	//strcpy(str3, str1);
	// cf.strcpy 는 길이를 검사하지 않기 때문에 취약한 함수
	// 따라서 scanf처럼 SDL 검사를 해제하지 않으면 사용 불가
	// 혹은 strcpy_s 를 사용하면 된다

	strcpy_s(str3, sizeof(str1), str1);
	// strcpy_s 길이를 검사해서 넘치면 복사를 하지 않음
	// 사용 : strcpy_s(source, sizeof(source), destnation);

	printf("str1 : %s\n", str1);
	//printf("str2 : %s\n", str2);
	printf("str3 : %s\n", str3);
}