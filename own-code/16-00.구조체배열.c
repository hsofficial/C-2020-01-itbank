#include<stdio.h>

typedef struct member {
	char name[30];
	char gender[10];
	int age;
}M;

void main() {
	M arr_st[5] = {
		"홍길동", "man", 37,		// 구조체의 멤버변수 개수만큼 채우면 자동으로 다음 인덱스로 넘어간다
		"북길동", "woman", 23,	// 만약, 개수를 잘못 맞추면 값이 저장되는 위치가 밀리거나 에러가 발생
		"남길동", "man", 26,
		"서길동", "woman", 45,
		"동길동", "woman", 40,
	};
	for (int i = 0; i < 5; i++) {
		printf("이름 : %s, 성별 : %s, 나이 : %d\n", arr_st[i].name, arr_st[i].gender, arr_st[i].age);
	}
}