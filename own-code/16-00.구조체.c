#include<stdio.h>

struct student {	// struct 구조체이름 => 구조체 선언(만듦)
	char name[20];
	int age;
	char address[30];
};

void main() {
	int num; // => 정수형 변수 num 생성
	struct student s1; // => student 자료형으로 만든 변수 s1 생성

	s1.age = 20;

	printf("s1의 age값 = %d\n", s1.age);

	struct student s2 = { "홍길동", 29, "홍길동전" };

	printf("s2의 name = %s, age = %d, address = %s\n", s2.name, s2.age, s2.address);
	// 결론, 구조체 내의 멤버변수 각각에 접근 할때는 . 을 사용해서 접근이 가능하다


	/* 구조체를 쓰지 않고 생성하려면 매번 변수명도 달라야하고
		각각의 변수를 매번 써야한다 => 변수의 개수가 많으면 코드의 길이가 늘어남
	char name1[20];
	int age1;
	char address1[30];

	char name2[20];
	int age2;
	char address2[30];
	*/
}