#include <stdio.h>
#include <stdlib.h>

void main() {
	char* ptr;
	int count, i;

	printf("���� ������ ���� : ");
	scanf_s("%d", &count);

	ptr = (char*)malloc(sizeof(char) * count);
	//sizeof(char)*count��ŭ heap�� malloc(1byte * cnt)
	//malloc ������ �������� cnt�� ���� > arr
	//return > char �����ּ�
	//�ּ����� > ptr

	for (int i = 0; i < count; i++)
	{
		ptr[i] = i + 1;
		printf("%d\n", ptr[i]);
	}

	free(ptr);
}