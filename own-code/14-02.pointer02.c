#include<stdio.h>

void main() {
	char ch1 = 'A', ch2;
	char* ptr;
	// �ڷ��� char(1byte)
	//������ ������ �����Ǿ��� ������ 4byte(x64:8byte)

	ptr = &ch1; 
	// ch1�� �ּҸ� ����
	ch2 = *ptr;	
	// ptr�� ����Ű�� �ּ�(&ch1)����
	//ch = 'A' �����ͼ� ch2�� ����

	printf("���� ch1�� �ּ�> %p\n", &ch1);
	printf("���� ptr(�ּ�)�� ����> %p\n\n", ptr);

	printf("���� ch1�� ��> %c\n", ch1);
	printf("���� *ptr�� ��> %c\n", *ptr);
	printf("���� ch2�� ��> %c\n\n", ch2);

	printf("���� ch1�� ũ��> %d\n", sizeof(ch1));
	//1byte
	printf("���� ptr�� ũ��> %d\n", sizeof(ptr));
	//4byte(x64:8byte)
	printf("���� *ptr�� ũ��> %d\n\n", sizeof(*ptr));
	// *ptr�� ����ī�� �ּ��� ����(ch1) => 1byte

	//cf
	double dl = 3.14;
	double* p_dl;

	printf("double dl�� ũ��> %d\n", sizeof(dl));
	//8byte
	printf("double* p_dl�� ũ��> %d\n", sizeof(p_dl));
	//4byte
}