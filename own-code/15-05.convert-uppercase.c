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

	printf("���ڸ� �Է��� �ּ��� (�빮�ں�ȯ) : ");
	scanf_s("%s", str, sizeof(str));
	printf("��ȯ �� ��Ʈ�� : %s\n", str);
	convertToUppercase(str);
	printf("��ȯ �� ��Ʈ�� : %s\n\n", str);

	printf("���ڸ� �Է��� �ּ��� (�ҹ��ں�ȯ) : ");
	scanf_s("%s", str, sizeof(str));
	printf("��ȯ �� ��Ʈ�� : %s\n", str);
	convertToLowercase(str);
	printf("��ȯ �� ��Ʈ�� : %s\n\n", str);
}