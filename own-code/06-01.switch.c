#include<stdio.h>

void main() {
	int score = 5;

	printf("input num(1-3) : ");
	scanf_s("%d", &score);

	switch (score)
	{
	case 1:
		printf("score is c\n");
		break;
	case 2:
		printf("score is B\n");
		break;
	case 3:
		printf("score is A\n");
		break;
	default:
		printf("wrong menu\n");
		break;
	}
	// break ���� ������ �Ʒ��� �ڵ带 ��� ����
	// break ���� ������ switch ���� Ż���Ѵ�
}