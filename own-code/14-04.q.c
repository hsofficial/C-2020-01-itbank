#include<stdio.h>

void main() {
	int num1 = 10, num2;
	char ch1, ch2 = 'B';
	double dl1 = 3.14, dl2;
	
	// 1. ������ ����> �����ͷ� num1�� ���� num2�� ����
	// num1 = num2 (x)

	int* p_num = &num1;
	// num1�� �ּҸ� p_num�� ���� => p_num�� num1
	num2 = *p_num;
	// p_num1�� ����Ű�� �ּҷ� ���� �ּҰ��� num2 �Ҵ�

	printf("num1 : %d, num2 : %d\n*p_num : %d\n\n", num1, num2, *p_num);

	// 2. ������ ����> �����ͷ� ch2�� ���� ch1�� ����
	char* p_ch = &ch2;
	ch1 = *p_ch;

	printf("ch1 : %c, ch2 : %c\n*p_ch : %c\n\n", ch1, ch2, *p_ch);

	// 3. ������ ����> �����ͷ� dl1�� ���� dl2�� ����
	// dl2�� �� �����ͷ� ����

	double* p_d = &dl1;
	dl2 = *p_d;

	p_d = &dl2;
	*p_d = 6.78;

	printf("dl1 : %lf, dl2 : %lf\n*p_d : %lf\n\n", dl1, dl2, *p_d);

	// 4. �� ������ �������� ������ �ּҸ� ���

	printf("p_num = %p, p_ch = %p, p_d = %p\n", p_num, p_ch, p_d);
}