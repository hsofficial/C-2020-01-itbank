#include<stdio.h>

void main() {
	char arr[10];
	scanf_s("%s", arr, sizeof(arr));

	for (int i = 0; i < 10; i++) {
		printf("arr[%d] = %c\n", i, arr[i]);
	}

	int j = 0;
	while (1) {
		if (arr[j] == '\0') // \0 = NULL �� �ǹ�
			break;
		// ���ڸ� �ϳ��� �˻�
		//NULL�� ������(���ڿ��� ��) �ݺ�����

		printf("%c\n", arr[j]);
		j++;
		
	}

	j = 0;
	printf("\narr = ");
	while (1) {	//���� �ϳ��� ��� ����
		if (arr[j] == NULL)	// NULL�� ������ ���� ���
			break;

		printf("%c", arr[j]);
		j++;
	}
	printf("\n");

	printf("\narr = %s\n", arr);
	// %s�� ���ڿ� �迭�� �����ּ� ���� NULL�� ������ ���� �˾Ƽ� ���ڿ��� ���
	// �׷��� ������ ���ڿ� ���������� NULL�� �� ������ �� �ʿ�
}