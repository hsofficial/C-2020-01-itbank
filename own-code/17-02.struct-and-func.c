#include <stdio.h>

typedef struct member {
	char name[30];
	int age;
}Member;

void Age_add(Member mm1) {
	// 2. ���� �޴� �ڷ����� Member
	mm1.age += 1;
	printf("�Լ����� mm1.age = %d\n", mm1.age);
}

void Age_padd(Member* p_m1) {
	// p-2. ���� ���� ���� �ּ��̱� ������ �����ͷ� �޴´�
	p_m1->age += 1;
	// main m1 �ּҿ� ���� ���� �� ����> m1�� �� ����
	// (*p_m1).age += 1; 
	// =line 16
	printf("�ι�° �Լ����� p_m1->age = %d\n", p_m1->age);
}

void main() {
	Member m1 = { "ȫ�浿", 29 };
	Age_add(m1);
	// 1. �����ϴ� ������ �ڷ����� Member

	printf("�Լ� ȣ�� �� m1.age = %d\n", m1.age);
	// m1�� Age_add�� mm1�� ���� �ٸ� ����, mm1�� ���� ����
	// ���� m1�� ���� ������ ���� ����

	Age_padd(&m1);
	// p-1. �����ϴ� ������ �ڷ����� Member�̰� �ּҰ�
	printf("�ι�° �Լ� ȣ�� �� m1.age = %d\n", m1.age);
}