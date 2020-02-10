#include <stdio.h>

typedef struct member {
	char name[30];
	char gender[6];
	int age;
}Member;

void main(){
	Member m1 = { "홍길동", "man", 29 };
	Member* p_m1 = &m1;
	// 구조체로 만든 변수 m1의 주소를 가리키는 p_m1 생성

	//cf.포인터가 저장할 주소의 자료형과 같은 자료형으로 포인터 생성

	printf("m1의 크기 : %d byte\n", sizeof(m1));
	printf("p_m1의 크기 : %d byte\n\n", sizeof(p_m1));
	//x86=4, x64=8

	printf("p_m1->name : %s\n", p_m1->name);
	printf("p_m1->gender : %s\n", p_m1->gender);
	printf("p_m1->age : %d\n\n", p_m1->age);
	//구조체 변수주소로 member 접근시 -> 이용

	printf("(*p_m1).name : %s\n", (*p_m1).name);
	printf("(*p_m1).gender : %s\n", (*p_m1).gender);
	printf("(*p_m1).age : %d\n\n", (*p_m1).age);
	// .은 구조체로 만든 변수로 직접 접근 할때 사용
	// *p_m1 = m1, m1은 구조체 변수, 따라서 . 으로 접근가능

	// (*p_m1).name; 
	// 괄호필수> 연산자 우선순위 때문

	// *p_m1.name;	
	// *p_m1보다 p_m1.name으로 먼저 연산>오류

}