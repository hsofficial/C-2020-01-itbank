#include<stdio.h>
// 구조체의 크기는 멤버 변수의 자료형 중 가장큰 자료형을 기준으로 메모리를 채워 나감
typedef struct student {
	char name;			// => char = 1byte
	double weight;		// => double = 8byte
	char address[5];	// => char = 1byte
	int age;			// => int = 4byte
	// 가장 큰 자료형은 double => 그러면? 전부 8byte?? => 그래서 32byte인가? => 땡!!!
}Student;


void main() {
	Student s1;
	printf("s1의 변수들의 크기 : %d\n", sizeof(s1));	// 출력결과는 24byte
}

/*
	구조체의 크기는 
	변수가 저장되야 될 때 마다 가장 큰 자료형크기로 생성된다.
	만약, 다음 자료형을 저장해야 할때 앞에 만든 메모리의 공간이 충분하면 새로 만들지 않고 채운다
	모자랄 경우 메모리를 가능 큰자료형 크기로 새로 만든다

*/