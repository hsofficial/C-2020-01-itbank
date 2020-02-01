#include <stdio.h>
#include<stdlib.h>
#include<string.h>

char* commify(double val, char* buf, int round);

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
		case 6:
			system("cls");
			ex6();
			system("pause");
			system("cls");
			break;
		case 7:
			system("cls");
			ex7();
			system("pause");
			system("cls");
			break;
		case 8:
			system("cls");
			ex8();
			system("pause");
			system("cls");
			break;
		case 9:
			system("cls");
			ex9();
			system("pause");
			system("cls");
			break;
		case 10:
			system("cls");
			ex10();
			system("pause");
			system("cls");
			break;
		case 11:
			system("cls");
			ex11();
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
	int num;
	printf("num : ");
	scanf_s("%d", &num);
	if (num % 3 == 0)
	{
		printf("3배수\n");
	}
	else
	{
		printf("3배수 F\n");
	}
}

ex2(void) {
	int num5, calc;
	printf("input num : ");
	scanf_s("%d", &num5);

	if (num5 > 0)
		calc = num5;

	else
		calc = num5 * (-1);

	printf("절대값 : %d\n", calc);
}

ex3(void) {
	int num1;
	printf("input num : ");
	scanf_s("%d", &num1);
	if (num1 % 2 == 0)
		printf("%d는 짝수\n", num1);
	else
		printf("%d는 홀수\n", num1);
}

ex4(void) {
	int a, b, c;
	printf("input num [1] [2] [3] : ");
	scanf_s("%d%d%d", &a, &b, &c);

	if (a > b && a > c)
		printf("가장 큰수는 %d\n", a);
	else if (b > a && b > c)
		printf("가장 큰 수는 %d\n", b);
	else
		printf("가장 큰 수는 %d\n", c);
}

ex5(void) {
	int a, b;
	printf("input num [1] [2] : ");
	scanf_s("%d%d", &a, &b);

	if (a > b)
	{
		if (a % 2 == 0)
		{
			printf("%d = 짝수+큰수\n",a);
		}
		else
		{
			printf("%d = 큰수\n",a);
		}
	}
	else
	{
		if (b % 2 == 0)
		{
			printf("%d = 짝수+큰수\n",b);
		}
		else
		{
			printf("%d = 큰수\n",b);
		}
	}
}

ex6(void) {
	int a, b, sum;
	printf("input num [1] [2] : ");
	scanf_s("%d%d", &a, &b);
	sum = a + b;

	if (sum % 3 == 0)
	{
		printf("sum %d 는 3배수\n", sum);
	}
	else
	{
		printf("sum %d 는 3배수 x\n", sum);
	}
}

ex7(void) {
	int kor, eng, mat, sum;
	double avg;

	printf("input num [kor] [eng] [mat] : ");
	scanf_s("%d%d%d", &kor, &eng, &mat);

	sum = kor + eng + mat;
	avg =  sum / 3.0;

	printf("======================================\n");
	printf("kor = %d, eng = %d, mat = %d\n", kor, eng, mat);
	printf("sum = %d, avg = %.2f\n", sum, avg);
	printf("Rating : ");

	if (avg >= 90) //90 ~ 100
		printf("A등급\n");
	else if (avg >= 80)
		printf("B등급\n");
	else if (avg >= 70)
		printf("C등급\n");
	else if (avg >= 60)
		printf("D등급\n");
	else
		printf("F등급\n");
}

ex8(void) {
	int num, price;
	char buf[50];

	printf("input num : ");
	scanf_s("%d", &num);

	if (num >= 100)
	{
		price = (int)(num * 5000) * 0.88;
	}
	else if (num >=10)
	{
		price = (int)(num * 5000) * 0.9;
	}
	else
	{
		price = num * 5000;
	}

	printf("price : %s\b won\n", commify(price, buf, 0));
}

/*
태어난 해, 월, 일을 입력 받아 사주팔자를 보는 프로그램을 작성
사주를 보는 방법)
세 수(년,월,일)가 주어지면,  (년 - 월 + 일)에 마지막 숫자가 0이면 "대박"을 출력, 그렇지 않으면 "그럭저럭"을 출력하세요.
*/
ex9(void) {
	int bday, year, month, day, checksum;
	printf("input bday(YYYYMMDD) : ");
	scanf_s("%d", &bday);

	year = bday / 10000;
	month = (bday % 10000) / 100;
	day = (bday % 10000) % 100;

	checksum = year - month + day;

	printf("y>%d, m>%d, d>%d, checksum>%d\n", year, month, day, checksum);

	if (checksum % 10 == 0)
	{
		printf("good\n");
	}
	else
	{
		printf("normal\n");
	}
}

/*
주민등록번호는 생년월일과 성별정보, 지역정보로 이루어집니다.
여기서 생년월일과 성별정보만 입력으로 받습니다.
성별 정보는 1이면 1900년대 출생 남자, 2이면 1900년대 출생 여자, 3이면 2000년대 출생 남자, 4이면 2000년대 출생 여자를 말합니다.
기준년도는 2018년도이고, 현재 나이를 출력하시오. 
예)
901129 1        =====> 성별정보가 1이므로, 1990년생, 29살이다.
080521 4        =====>  성별정보가 4이므로, 2008년생,  10살이다
*/
ex10(void) {
	int birthnum, reginum, yearnum;
	printf("생년월일과 주민번호 뒷 자리의 첫 글자 입력 : ");
	scanf_s("%d%d", &birthnum, &reginum);
	//901129 / 10000 => 90
	yearnum = birthnum / 10000;
	if (reginum == 1 || reginum == 2)
		printf("나이는 : %d\n,", 2019 - (1900 + yearnum) + 1);
	else if (reginum == 3 || reginum == 4)
		printf("나이는 : %d\n,", 2019 - (2000 + yearnum) + 1);
	else
		printf("잘못된 입력입니다.\n");

}

/*
 배달 도시락을 주문하는데 10개까지는 개당2500원이고 10개를
초과하는 양에 대해서는 개당2400원이다. 배달 도시락의 개수를
입력 받아서 금액을 계산하는 프로그램을 작성하라.
*/
ex11(void) {
	int num, price;
	char buf[50];

	printf("input num : ");
	scanf_s("%d", &num);

	if (num > 10)
		price = ( (num - 10) * 2400 ) + (2500 * 10);
	else
		price = num * 2500;

	printf("price : %s\b won\n", commify(price, buf, 0));
}


// http://groups.google.co.kr/group/comp.lang.c/msg/165f11c5f832321e?dmode=source

/*****************************************************************************
 *                                commify()                                  *
 *                                                                           *
 *  Commify a number, that is add commas between every third digit ahead of  *
 *  the decimal point.  Rounds off to abs(round) digits following the        *
 *  decimal point. Stores the results into the buf[] passed to the function  *
 *  and returns a pointer to it.  Uses the standard library function fcvt()  *
 *  to do the conversion from the double val to the string of digits.        *
 *                                                                           *
 *****************************************************************************/
char* commify(double val, char* buf, int round) {
	static char* result;
	char* nmr;
	int dp, sign;


	result = buf;

	if (round < 0)                        /*  Be sure round-off is positive  */
		round = -round;

	nmr = fcvt(val, round, &dp, &sign);   /*  Convert number to a string     */

	if (sign)                             /*  Prefix minus sign if negative  */
		*buf++ = '-';

	if (dp <= 0) {                         /*  Check if number is less than 1 */
		if (dp < -round)                    /*  Set dp to max(dp, -round)      */
			dp = -round;
		*buf++ = '0';                       /*  Prefix with "0."               */
		*buf++ = '.';
		while (dp++)                        /*  Write zeros following decimal  */
			*buf++ = '0';                     /*     point                       */
	}
	else {                                /*  Number is >= 1, commify it     */
		while (dp--) {
			*buf++ = *nmr++;
			if (dp % 3 == 0)
				*buf++ = dp ? ',' : '.';
		}
	}

	strcpy(buf, nmr);                     /*  Append rest of digits         */
	return result;                        /*  following dec pt              */
}