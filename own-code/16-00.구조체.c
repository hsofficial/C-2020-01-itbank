#include<stdio.h>

struct student {	// struct ����ü�̸� => ����ü ����(����)
	char name[20];
	int age;
	char address[30];
};

void main() {
	int num; // => ������ ���� num ����
	struct student s1; // => student �ڷ������� ���� ���� s1 ����

	s1.age = 20;

	printf("s1�� age�� = %d\n", s1.age);

	struct student s2 = { "ȫ�浿", 29, "ȫ�浿��" };

	printf("s2�� name = %s, age = %d, address = %s\n", s2.name, s2.age, s2.address);
	// ���, ����ü ���� ������� ������ ���� �Ҷ��� . �� ����ؼ� ������ �����ϴ�


	/* ����ü�� ���� �ʰ� �����Ϸ��� �Ź� ������ �޶���ϰ�
		������ ������ �Ź� ����Ѵ� => ������ ������ ������ �ڵ��� ���̰� �þ
	char name1[20];
	int age1;
	char address1[30];

	char name2[20];
	int age2;
	char address2[30];
	*/
}