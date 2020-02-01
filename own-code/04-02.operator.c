#include <stdio.h>
#include<stdlib.h>

void main() {
	int menu;

	while (1)
	{
		printf("1. ex[N] = N\n");
		printf("======================================\n");
		printf(" 번호를 선택하세요[종료-> 0] : ");
		scanf("%d", &menu);

		if (menu == 0)
			return;

		switch (menu)
		{
		case 1:
			system("cls");
			ex1();
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			ex2();
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			ex3();
			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");
			ex4();
			system("pause");
			system("cls");
			break;
		case 5:
			system("cls");
			ex5();
			system("pause");
			system("cls");
			break;

		default:
			printf(" %d 는 메뉴에 없는 번호입니다. \n", menu);

		}
	}

	return 0;
}

ex1(void) {
	int num1 = 20, num2 = 3;

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d X %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);
}

ex2(void) {
	//대입연산자

	int num1 = 20;

	printf("num1 before num1 += 5 : %d\n", num1);
	num1 += 5;	//num1 = num1 + 5
	printf("num1 after num1 += 5 : %d\n", num1);
	num1 -= 4;	//num1 = num1 - 4
	printf("num1 after num1 -= 4 : %d\n", num1);
	num1 *= 2;	//num1 = num1 * 2
	printf("num1 after num1 *= 2 : %d\n", num1);
	num1 /= 2;	//num1 = num1 / 2
	printf("num1 after num1 /= 2 : %d\n", num1);
	num1 %= 5;	//num1 = num1 % 5
	printf("num1 after num1 %= 5 : %d\n", num1);

}

ex3(void) {
	//관계연산자
	double num1 = 3.01, num2 = 3.0;

	//TRUE==0, FALSE==1
	printf("num1 < num2 = %d\n", num1 < num2);
	printf("num1 > num2 = %d\n", num1 > num2);
	printf("num1 <= num2 = %d\n", num1 <= num2);
	printf("num1 >= num2 = %d\n", num1 >= num2);
	printf("num1 == num2 = %d\n", num1 == num2);
	printf("num1 != num2 = %d\n\n", num1 != num2);

	double num3 = 4.0, num4 = 4.0;
	printf("num3 == num4 = %d\n", num3 == num4);
	printf("num3 != num4 = %d\n\n", num3 != num4);
}

ex4(void) {
	//증감연산자
	int num1, num2, num3;

	num1 = 10;
	num2 = ++num1;
	/*
	전치 : num1의 값을 증가->num2 대입
	증감 후 다른 연산자를 수행
	10에서 11로 증가 후 대입
	*/

	num1 = 10;
	num3 = num1++;
	
	/*
	후치 : num3에 대입->증가
	다른 연산자를 수행 후 증감
	10을 num3에 전달 후 증가
	(for cnt variable)
	*/

	printf("num[1] [2] [3] = %d %d %d\n", num1, num2, num3);

}

ex5(void) {
	//논리연산자-1
	int num1 = 2, num2 = 3, num3 = 5, result = 3;

	printf("result의 값 : %d\n", (num1 > 0) && (num2 < 10));
	//둘다 참일때만 실행
	printf("result의 값 : %d\n", (num2 <= 0) || (num3 > 10));
	//둘다 거짓일때만 실행
	printf("result의 값 : %d\n", !result);
	//부정연산자

	printf("result의 값 : %d\n", (num1 > 0) && (num2 < 10)); 
	// 참 참
	printf("result의 값 : %d\n", (num1 < 0) && (num2 < 10)); 
	// 거짓 참
	printf("result의 값 : %d\n", (num2 <= 0) || (num3 > 10)); 
	// 거짓 거짓
	printf("result의 값 : %d\n", (num2 <= 0) || (num3 < 10)); 
	// 기짓 참
}