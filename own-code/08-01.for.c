#include <stdio.h>

void main() {
	int a = 0;

	while (a<5)
	{
		printf("%d\n", a);
		a++;
	}
	printf("============\n");

	for (size_t i = 0; i < 5; i++)
	{
		printf("%d\n", i);
	}
	printf("============\n");

	for (int j = 0; j < 5; j++)
	{
		printf("%d\n", j);
	}
//	for�� �ȿ��� ������ j�� for���� ������ ��������. (��������)

	// ����1. for������ 1 ~ 5���� ����غ�����
	printf("============\n");

	for (int j = 1; j <= 5; j++)
		printf("%d\n", j);
//	for���� ���ӹ����� �����̸� �߰�ȣ ���� ����
	printf("============\n");

	//����
	for (int j = 5; j >= 1; j--)
		printf("%d\n", j);
	printf("============\n");

	//¦
	for (int z = 2; z < 20; z += 2) {
		printf("(for)z : %d\n", z);
	}
	printf("============\n");

	printf("stop\n");
}