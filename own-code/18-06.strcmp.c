#include<stdio.h>
#include<string.h>

void main() {
	char str1[30] = "Btring Function";
	char str2[20];
	char str3[20] = "Atring Func";

	strcpy_s(str2, sizeof(str2), str1);
	// strcmp�� ������ 0, �ٸ��� 1
	// T/F�� �ݴ��̹Ƿ� ����

	printf("str1 �� str2�� ���̴� : %d\n", strcmp(str1, str2));
	printf("str1 �� str3�� ���̴� : %d\n", strcmp(str1, str3));
	printf("str1 �� str2�� ���̴� : %d\n", !strcmp(str1, str2));
}