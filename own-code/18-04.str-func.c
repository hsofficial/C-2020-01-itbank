#include<stdio.h>

int my_strlen(char* str) {
	int count = 0;
	while (*str != NULL) {//str ���������� �ݺ�
		str += 1;	//���� str address �˻�
		count += 1;	// ���ڸ� �˻��Ҷ� ���� count �� 1�� ����
	}
	return count;	// ������ count��(= ���ڰ���)�� ��ȯ
}

void main() {
	char str[30] = "String Fuction";

	printf("str ���ڿ� ���� : %d\n", strlen(str));
	printf("str ���ڿ� ũ�� : %d\n", sizeof(str));
	// strlen() �� �ش� ���ڿ��� ������ ���� ���������� ��ȯ
	// sizeof() �� �ش� ����(�迭)�� ũ�⸦ ���������� ��ȯ

	printf("str ���ڿ� ����(my_strlen) : %d\n", my_strlen(str));
}