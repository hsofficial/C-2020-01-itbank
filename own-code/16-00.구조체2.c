#include<stdio.h>
#include<string.h>

typedef struct student {	// typedef �� ����ü ����
	char name[20];
	int age;
	char address[30];
}S;	// typedef �� ����ü �����, ����ü�� ��Ī�� ������ �� �ִ�

void main() {
	struct student s1 = { "ȫ�浿",29,"ȫ�浿��" };
	printf("s1�� name = %s, age = %d, address = %s\n", s1.name, s1.age, s1.address);

	S s2 = { "��浿", 45, "�Ѹ�" };	// ��Ī�� ����� ��Ī�̸����� ����ü ���� ���� ����
									// ��������
	printf("s2�� name = %s, age = %d, address = %s\n", s2.name, s2.age, s2.address);

}