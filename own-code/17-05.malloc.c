#include<stdio.h>
#include<stdlib.h>

void main() {
	int* ptr;

	ptr = (int*)malloc(sizeof(int));
	// sizeof(int)�� ũ�⸸ŭ heap������ �����Ҵ�(����)
	// ��ȯ �ڷ����� ����(int), �ּ�����(*) => (int*)
	// �ּҹ�ȯ, ������ ������ ������(ptr)

	*ptr = 10;	
	// �����Ҵ�� �ּҸ� ã�ư��� 10 �������� ����

	printf("ptr�� ����Ű�� �ּҰ� : %p\n", ptr);
	printf("ptr�� ����Ű�� �� : %d\n", *ptr);

	free(ptr);
	//�����Ҵ� ���� ����
	//���� ���� ������ ���� �Ŀ��� �޸� ����
}