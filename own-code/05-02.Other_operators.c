#include<stdio.h>

void main() {
	char ch;	// 1byte
	int num;	// 4byte
	float fl;	// 4byte
	double dl;	// 8byte

	printf("ch ������ ũ�� : %d\n", sizeof(ch));
	printf("num ������ ũ�� : %d\n", sizeof(num));
	printf("fl ������ ũ�� : %d\n", sizeof(fl));
	printf("dl ������ ũ�� : %d\n", sizeof(dl));
	// sizeof(������ or �ڷ���)
	//�ڷ����̳� �������� ũ�⸦ ������ ��ȯ(byte����)

	//�޸�������
	int a = 0, b = 0, c = 0;
	a = (b = 3, c = 5, b + c);
	// ���� �޸��� �����Ͽ� �������� ����
	//���� �������� ���� ����� �ȴ�
	printf("a�� �� : %d\n", a);
}