#pragma once
#ifndef __AVG__		// 헤더파일의 이름을 선언할껀데 만약 중복되는 이름이 있으면 사용하지 않겠다
#define __AVG__		// 헤더파일의 이름
#include<stdio.h>

double avg(int x, int y) {
	double f;
	f = (x + y) / 2.0;
	return f;
}

double divi(int x, int y) {
	double f;
	f = x / y;
	return f;
}

int sum(int x, int y) {
	int f = x + y;
	return f;
}

int minus(int x, int y) {
	int f = x - y;
	return f;
}

int mul(int x, int y) {
	int f = x * y;
	return f;
}

void show_avg(int x, int y, double f) {
	printf("%d와 %d의 평균값은 %.2lf입니다.\n", x, y, f);
}

int Quotient(int x, int y) {
	return x / y;	//	수식의 결과를 반환  ==>  자신을 호출한 곳으로
}

int Remainder(int x, int y) {
	return x % y;
}

void IntDivide(int x, int y) {
	printf("%d / %d 의 몫 : %d\n", x, y, Quotient(x, y));	// Quotient() 함수를 호출
	printf("%d / %d 의 나머지 : %d\n", x, y, Remainder(x, y));	//Remainder() 함수를 호출
}

int compare(int x, int y) {
	if (x > y)
		return x;
	else if (x < y)
		return y;
	else
		return 0;
}

void EvenOdd(int x) {
	int chk = x % 2;

	if (chk == 0)
		printf("even number\n");
	else
		printf("odd number\n");
}

int Avalue() {
	int x;
	printf("input num : ");
	scanf_s("%d", &x);

	if (x >= 0)
		return x;
	else
		return -x;
}

void ThreeMul() {
	int x, y, cnt;
	printf("input range [1] ~ [2] : ");
	scanf_s("%d%d", &x, &y);

	if (x > y)
		printf("err : 작은수, 큰수 순서대로 입력해주세요\n");
	else
	{
		while (x <= y)
		{
			if (x % 3 == 0)
				printf("%d ", x);

			x++;
		}
		printf("fin\n");
	}

}

void Reverse(int x) {
	do{
		printf("%d", x % 10);
		x = x / 10;
	} while (x);
	printf("\n");
}

#endif // !__AVG__
