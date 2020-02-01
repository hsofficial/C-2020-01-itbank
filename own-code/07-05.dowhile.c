#include<stdio.h>

void main() {
	int num = 10;

	do {	// 실행문(종속문)이 조건문 보다 먼저 실행
		printf("do-while\n");
		printf("num = %d\n", num);
		num++;
	} while (num <= 9);

	while (num <= 9) {	// 조건을 먼저 판별
		printf("while\n");
		printf("num = %d\n", num);
		num++;
	}
}
