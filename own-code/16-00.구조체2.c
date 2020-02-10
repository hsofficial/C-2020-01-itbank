#include<stdio.h>
#include<string.h>

typedef struct student {	// typedef 로 구조체 선언
	char name[20];
	int age;
	char address[30];
}S;	// typedef 로 구조체 선언시, 구조체의 별칭을 설정할 수 있다

void main() {
	struct student s1 = { "홍길동",29,"홍길동전" };
	printf("s1의 name = %s, age = %d, address = %s\n", s1.name, s1.age, s1.address);

	S s2 = { "고길동", 45, "둘리" };	// 별칭을 만들면 별칭이름으로 구조체 변수 생성 가능
									// 간편해짐
	printf("s2의 name = %s, age = %d, address = %s\n", s2.name, s2.age, s2.address);

}