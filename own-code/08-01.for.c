#include <stdio.h>

void main() {
	int a = 0;

	while (a<5)
	{
		printf("%d\n", a);
		a++;
	}
	printf("============\n");

	for (size_t i = 0; i < 5; i++)
	{
		printf("%d\n", i);
	}
	printf("============\n");

	for (int j = 0; j < 5; j++)
	{
		printf("%d\n", j);
	}
//	for문 안에서 생성된 j는 for문이 끝나면 없어진다. (지역변수)

	// 문제1. for문으로 1 ~ 5까지 출력해보세요
	printf("============\n");

	for (int j = 1; j <= 5; j++)
		printf("%d\n", j);
//	for문도 종속문장이 한줄이면 중괄호 생략 가능
	printf("============\n");

	//역순
	for (int j = 5; j >= 1; j--)
		printf("%d\n", j);
	printf("============\n");

	//짝
	for (int z = 2; z < 20; z += 2) {
		printf("(for)z : %d\n", z);
	}
	printf("============\n");

	printf("stop\n");
}