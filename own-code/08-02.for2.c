#include<stdio.h>

void main() {
	int num = 1, sum = 0;

	for (; num <= 10;) {
		printf("%d ", num);
		sum += num;
		num++;
	}
	// 초기값과 조건 및 증감 생략 가능
	// 생긴 모양이 거의 while과 유사

	printf("sum = %d\n", sum);
	printf("\n");

	int num1 = 1;
	int sum1 = 0;
	for (;;) {	// 모두 생략시 무한반복 => while(1)
		printf("%d ", num1);
		sum1 += num1;
		num1++;
		if (num1 == 11) {	// 조건문을 통한 break로 탈출해야 한다
			break;
		}
	}
	printf("sum1 = %d\n", sum1);
	printf("\n");
}