#include<stdio.h>

typedef struct people {
	char name[10];
	int age;
	struct people* link;
}People;

void main() {
	People p_1 = { "park", 22, NULL };
	People p_2 = { "par", 23, NULL };
	People p_3 = { "pak", 24, NULL };

	p_1.link = &p_2;
	p_2.link = &p_3;
	p_3.link = &p_1;
	// struct people�� ����� ptr>���� ����ü �����ּ� ����ų�� �ִ�
	// => �ڱ� ���� ����ü

	p_2.link->age = 30;
	// p_2.link�� p3�� �ּҸ� ����

	// = &p3->age = 30;
	// p3�� �ּ��̱� ������ -> �� ������� ����

	// = (*&p3).age = 30;

	printf("p_3.age = %d\n", p_2.link->age);
	printf("p_2.link->age = %d\n", p_3.age);

}