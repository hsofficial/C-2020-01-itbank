#include <stdio.h>

void main() {
	int num;

	printf("input num : ");
	scanf_s("%d", &num);
	// ���� ������
	// (���ǽ�) ? ���ϰ������ڵ� : �����ϰ������ڵ�
	(num % 2 == 0) ? printf("%d�� ¦��\n", num)
		: printf("%d�� Ȧ��", num);


}