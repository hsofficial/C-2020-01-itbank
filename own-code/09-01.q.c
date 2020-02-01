#include <stdio.h>
#include<stdlib.h>

void main() {
	int menu;

	while (1)
	{
		printf("1. q[N] = N\n");
		printf("======================================\n");
		printf(" 번호를 선택하세요[종료-> 0] : ");
		scanf_s("%d", &menu);

		if (menu == 0)
			return;

		switch (menu)
		{
		case 1:
			system("cls");
			q1();
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			q2();
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			q3();
			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");
			q4();
			system("pause");
			system("cls");
			break;

		case 5:
			system("cls");
			q5();
			system("pause");
			system("cls");
			break;
		case 6:
			system("cls");
			q6();
			system("pause");
			system("cls");
			break;
		case 7:
			system("cls");
			fib();
			system("pause");
			system("cls");
			break;

		default:
			printf(" %d 는 메뉴에 없는 번호입니다. \n", menu);

		}
	}

	return 0;
}

/*
1~1000까지의 합
단 3의 배수는 제외
3의 배수이면서 5의 배수는 제외하지 않는 조건
*/
q1(void) {
	int range, res = 0 , minus = 0;
	printf("input num : ");
	scanf_s("%d", &range);

	for (size_t i = 0; i <= range; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			minus += i;
		}
		else
		{
			continue;
		}
	}

	for (size_t i = 0; i <= range; i++)
	{
		res += i;
	}

	res = res - minus;

	printf("result : %d\n", res);
}

/*
첫날에 1원을 예금하고, 다음날에는 전날의 2배를 예금하는 방식
한달(30일) 동안 저축한 금액
*/
q2(void) {
	int range, bal = 0, input = 1;
	printf("input day range : ");
	scanf_s("%d", &range);

	for (size_t i = 0; i <= range; i++)
	{
		if (i == 0)
		{
			bal = input;
		}
		else
		{
			bal = bal + input;
			input *= 2;
		}
		
	}

	printf("result : %d\n", bal);
}

//약수 출력과 카운팅
q3(void) {
	int range, cnt = 0;
	int arr[100] = { 0 };

	printf("input num : ");
	scanf_s("%d", &range);

	for (int i = 1; i <= range; i++)
	{
		if (range % i == 0) 
		{
			arr[cnt] = i;
			cnt++;
		}
	}

	printf("divisor : ");

	for (int i = 0; i <= cnt - 1; i++)
	// 배열의 요소 개수만큼 반복 (배열은 0부터 시작하므로 cnt - 1)
		printf("%d ", arr[i]);
		// 배열의 인덱스에 반복문의 변수 i를 지정

	printf("\n");
	printf("cnt : %d\n", cnt);
}

//소수판별
q4(void) {
	int num, i;
	printf("input num : ");
	scanf_s("%d", &num);

	for (i = 2 ; i < num ; i++)
	{
		if (num % i == 0)
		{
			printf("Not prime number.\n");
			break;
		}
		else
			continue;
	}

	if (i == num)
		printf("%d is prime number.\n", num);

}

//factorial

q5(void) {
	int num;
	long long int res = 1;
	printf("input num : ");
	scanf_s("%d", &num);

	for (size_t i = 1; i <= num; i++)
	{
		res *= i;
	}

	printf("%d factorial : %lld\n", num, res);
}

q6(void) {
	printf("simple type\n");

	int num1;

	printf("number of stars : ");
	scanf_s("%d", &num1);

	for (int i = 0; i < num1; i++) { // 행(가로줄)의 수
		for (int j = 0; j < num1; j++) { // 열(세로줄)의 수
			printf("*");
		}
		printf("\n");
	}

	printf("직각이등변삼각형\n");
	printf("line of stars : ");
	scanf_s("%d", &num1);

	for (int i = 0; i < num1 + 1; i++) { // 행(가로줄)의 수
		for (int j = 0; j < i + 1; j++) { // 열(세로줄)의 수
			printf("*");
		}
		printf("\n");
	}

	printf("직각이등변삼각형-역방향\n");
	int j;

	printf("line of stars : ");
	scanf_s("%d", &num1);

	for (int i = 0; i < num1; i++) { // 행(가로줄)의 수
		
		for (j = 0; j < num1 - i ; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i ; j++) { 
			printf("*");
		}

		printf("\n");
	}
}

//소수판별2
primnum_plus(void) {
	int num, count = 0;

	printf("정수 입력 : ");
	scanf_s("%d", &num);
	printf("1 ~ %d 까지 소수를 구하는 프로그램\n", num);

	printf("1 ");

	for (int i = 1; i <= num; i++) {

		int j;

		for (j = 2; j < num; j++) {
			if (i % j == 0) {
				break;
			}
		}

		if (i == j) {
			printf("%d ", i);
			count++;
		}
	}
	printf("\n1 ~ %d 까지의 소수 개수는 %d 개 입니다.\n", num, count);

}

//fib

fib(void) {
	long long int i;
	long long int num;
	long long int head = 0;
	long long int mid = 0;
	long long int rear = 1;

	printf("fib num : ");
	scanf_s("%lld", &num);

	for (i = 0; i < num; i++) {
		printf("%lld ", head);
		mid = head + rear;
		head = rear;
		rear = mid;
	}
}