#include <stdio.h>
#include <stdlib.h>

void main() {
	int* ptr = (int*)malloc(sizeof(int));
	//sizeof(int) ũ�⸸ŭ heap�� malloc
	//������ ���� �ּ� int������ ��ȯ
	//�ּҷ� ��ȯ�ǹǷ� ���� ������ ptr

	*ptr = 100;
	//ptr ������ 100 ����

	printf("ptr�� ����Ű�� �� : %d\n", *ptr);
	printf("ptr�� ����Ű�� �ּ� : %p\n", ptr);
	printf("ptr�� ����Ű�� ������ ũ�� : %d byte\n\n", sizeof(*ptr));

	free(ptr);
	//ptr ����
	printf("ptr�� ����Ű�� �� : %d\n", *ptr);
	//free ���>�� �����
	printf("ptr�� ����Ű�� �ּ� : %p\n", ptr);
	//ptr�� ����, �ּҴ� �Һ�
	printf("ptr�� ����Ű�� ������ ũ�� : %d byte\n", sizeof(*ptr));
	//ptr�� int�̹Ƿ� 4byte
}