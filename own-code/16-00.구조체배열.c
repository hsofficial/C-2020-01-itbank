#include<stdio.h>

typedef struct member {
	char name[30];
	char gender[10];
	int age;
}M;

void main() {
	M arr_st[5] = {
		"ȫ�浿", "man", 37,		// ����ü�� ������� ������ŭ ä��� �ڵ����� ���� �ε����� �Ѿ��
		"�ϱ浿", "woman", 23,	// ����, ������ �߸� ���߸� ���� ����Ǵ� ��ġ�� �и��ų� ������ �߻�
		"���浿", "man", 26,
		"���浿", "woman", 45,
		"���浿", "woman", 40,
	};
	for (int i = 0; i < 5; i++) {
		printf("�̸� : %s, ���� : %s, ���� : %d\n", arr_st[i].name, arr_st[i].gender, arr_st[i].age);
	}
}