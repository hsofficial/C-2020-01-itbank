#include<stdio.h>

void main() {
	int num = 123;
	int* p_num;

	char ch = 'A';
	char* p_ch;

	p_num = &num;
	p_ch = &ch;

	printf("p_ch address= %p\n", p_ch);
	printf("p_num address= %p\n", p_num);

	printf("p_ch-1: %p,  p_ch: %p,  p_ch+1: %p\n", p_ch - 1, p_ch, p_ch + 1);
	// char* : �ּҰ��� �����ؼ� ������ �� char�̶�� ���
	//char(1byte)ũ�⸸ŭ ����
	printf("p_num-1 : %p,  p_num: %p,  p_num+1: %p\n", p_num - 1, p_num, p_num + 1);
	// num* : �ּҰ��� �����ؼ� ������ �� int�̶�� ���
	//int(4byte)ũ�⸸ŭ ����
	
	//�ڷ��� ũ�⸸ŭ pointer ��� �ǽ�
	//�ּҸ� ������ �����ͺ����� ����� ������ �ڷ��� ����� ��
}