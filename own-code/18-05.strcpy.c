#include <stdio.h>
#include<string.h>

void main() {
	char str1[30] = "��ƴ���� ��ġ�� ������������"; //28byte
	char str2[20];
	char str3[30];

	//strcpy(str2, str1); 
	// str2�� �������� �� �� ���ڿ��� ����
	// => ����, Ȥ�� ���ۿ����÷ο�

	//strcpy(str3, str1);
	// cf.strcpy �� ���̸� �˻����� �ʱ� ������ ����� �Լ�
	// ���� scanfó�� SDL �˻縦 �������� ������ ��� �Ұ�
	// Ȥ�� strcpy_s �� ����ϸ� �ȴ�

	strcpy_s(str3, sizeof(str1), str1);
	// strcpy_s ���̸� �˻��ؼ� ��ġ�� ���縦 ���� ����
	// ��� : strcpy_s(source, sizeof(source), destnation);

	printf("str1 : %s\n", str1);
	//printf("str2 : %s\n", str2);
	printf("str3 : %s\n", str3);
}