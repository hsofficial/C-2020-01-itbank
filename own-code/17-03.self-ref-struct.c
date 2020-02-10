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
	// struct people로 저장된 ptr>같은 구조체 변수주소 가리킬수 있다
	// => 자기 참조 구조체

	p_2.link->age = 30;
	// p_2.link는 p3의 주소를 저장

	// = &p3->age = 30;
	// p3의 주소이기 때문에 -> 로 멤버변수 접근

	// = (*&p3).age = 30;

	printf("p_3.age = %d\n", p_2.link->age);
	printf("p_2.link->age = %d\n", p_3.age);

}