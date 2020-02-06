#include<stdio.h>

void convertToUppercase(char* s) {
	while (*s != NULL)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		else if (*s >= 'A' && *s <= 'Z')
			*s += 32;
		s++;
	}
}

void convertToLowercase(char* s) {
	while (*s != NULL)
	{
		if (*s >= 'A' && *s <= 'Z')
			*s += 32;
		else if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
}

void main() {
	char str[30];

	printf("문자를 입력해 주세요 (대문자변환) : ");
	scanf_s("%s", str, sizeof(str));
	printf("변환 전 스트림 : %s\n", str);
	convertToUppercase(str);
	printf("변환 후 스트림 : %s\n\n", str);

	printf("문자를 입력해 주세요 (소문자변환) : ");
	scanf_s("%s", str, sizeof(str));
	printf("변환 전 스트림 : %s\n", str);
	convertToLowercase(str);
	printf("변환 후 스트림 : %s\n\n", str);
}