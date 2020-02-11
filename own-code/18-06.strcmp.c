#include<stdio.h>
#include<string.h>

void main() {
	char str1[30] = "Btring Function";
	char str2[20];
	char str3[20] = "Atring Func";

	strcpy_s(str2, sizeof(str2), str1);
	// strcmp는 같으면 0, 다르면 1
	// T/F와 반대이므로 주의

	printf("str1 과 str2의 길이는 : %d\n", strcmp(str1, str2));
	printf("str1 과 str3의 길이는 : %d\n", strcmp(str1, str3));
	printf("str1 과 str2의 길이는 : %d\n", !strcmp(str1, str2));
}