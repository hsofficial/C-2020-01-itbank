#include<stdio.h>

void main() {
	int num;
	while (1)
	{
		printf("input num(1-3) : ");
		scanf_s("%d", &num);

		if (num == 0)
			return;

		switch (num)
		{
		case 1:
			printf("ON\n");
			break;
		case 2:
			printf("OFF\n");
			break;
		case 3:
			printf("STOP\n");
			break;
		default:
			printf("wrong menu\n");
			break;
		}
		// break ���� ������ �Ʒ��� �ڵ带 ��� ����
		// break ���� ������ switch ���� Ż���Ѵ�
	}
}