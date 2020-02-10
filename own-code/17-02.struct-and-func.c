#include <stdio.h>

typedef struct member {
	char name[30];
	int age;
}Member;

void Age_add(Member mm1) {
	// 2. 따라서 받는 자료형도 Member
	mm1.age += 1;
	printf("함수내의 mm1.age = %d\n", mm1.age);
}

void Age_padd(Member* p_m1) {
	// p-2. 전달 받은 값이 주소이기 때문에 포인터로 받는다
	p_m1->age += 1;
	// main m1 주소에 직접 접근 값 변경> m1의 값 변경
	// (*p_m1).age += 1; 
	// =line 16
	printf("두번째 함수내의 p_m1->age = %d\n", p_m1->age);
}

void main() {
	Member m1 = { "홍길동", 29 };
	Age_add(m1);
	// 1. 전달하는 변수의 자료형이 Member

	printf("함수 호출 후 m1.age = %d\n", m1.age);
	// m1과 Age_add의 mm1은 서로 다른 변수, mm1은 값만 전달
	// 따라서 m1의 값과 연관이 전혀 없다

	Age_padd(&m1);
	// p-1. 전달하는 변수의 자료형이 Member이고 주소값
	printf("두번째 함수 호출 후 m1.age = %d\n", m1.age);
}