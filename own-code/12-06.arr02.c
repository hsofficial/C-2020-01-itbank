#include<stdio.h>

void main() {
	int array[10];	// ���� �ƹ��͵� �����ʰ�(�ʱ�ȭx), 10���� ������ ����

	for (int i = 0; i < 10; i++)
		array[i] = (i + 1);

	for (int i = 0; i < 10; i++)
		printf("arr[%d] = %d\n", i, array[i]);

	for (size_t i = 0; i < 10; i++)
	{
		printf("%d��° ���� �Է��� �ּ��� : ", i+1);
		scanf_s("%d", &array[i]);
	}

	for (int i = 0; i < 10; i++)
		printf("arr[%d] = %d\n", i, array[i]);

}