#include <stdio.h>

typedef struct member {
	char name[30];
	char gender[6];
	int age;
}Member;

void main(){
	Member m1 = { "ȫ�浿", "man", 29 };
	Member* p_m1 = &m1;
	// ����ü�� ���� ���� m1�� �ּҸ� ����Ű�� p_m1 ����

	//cf.�����Ͱ� ������ �ּ��� �ڷ����� ���� �ڷ������� ������ ����

	printf("m1�� ũ�� : %d byte\n", sizeof(m1));
	printf("p_m1�� ũ�� : %d byte\n\n", sizeof(p_m1));
	//x86=4, x64=8

	printf("p_m1->name : %s\n", p_m1->name);
	printf("p_m1->gender : %s\n", p_m1->gender);
	printf("p_m1->age : %d\n\n", p_m1->age);
	//����ü �����ּҷ� member ���ٽ� -> �̿�

	printf("(*p_m1).name : %s\n", (*p_m1).name);
	printf("(*p_m1).gender : %s\n", (*p_m1).gender);
	printf("(*p_m1).age : %d\n\n", (*p_m1).age);
	// .�� ����ü�� ���� ������ ���� ���� �Ҷ� ���
	// *p_m1 = m1, m1�� ����ü ����, ���� . ���� ���ٰ���

	// (*p_m1).name; 
	// ��ȣ�ʼ�> ������ �켱���� ����

	// *p_m1.name;	
	// *p_m1���� p_m1.name���� ���� ����>����

}