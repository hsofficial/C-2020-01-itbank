#include<stdio.h>

void main() {
	int kor, eng, mat;
	double avg = 0;

	printf("3���� ���� �Է� (��,��,��) : ");
	scanf_s("%d%d%d", &kor, &eng, &mat);

	avg = (double) (kor + eng + mat) / 3;

	if (avg < 70) {
		printf("��\n");
	}
	else if (kor < 60 || eng < 60 || mat < 60)
	{
		printf("avg > 70 ������ ����\n");
	}
	else
	{
		printf("��\n");
	}
}