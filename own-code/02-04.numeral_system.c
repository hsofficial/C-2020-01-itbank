#include<stdio.h>

/*
2진수 -> 10진수
2진수 1101 -> 10진수로 변환
1		1		0		1
2^3=8   2^2=4   2^1=2   2^0=1
8*1=8   4*1=4   2*0=0   1*=1
8 + 4 + 0 + 1 = 13

10진수 65 -> 2진수로 변환
65 % 2 = 1
32 % 2 = 0
16 % 2 = 0
8  % 2 = 0
4  % 2 = 0
2  % 2 = 0
1  % 2 = 1

16진수 FC5 -> 2진수
F(15)
2^3=8	15-8=7
2^2=4	7-4=3
2^1=2	3-2=1
2^0=1	1-1=0
1111

C(12)
2^3=8	12-8=4
2^2=4	4-4=0
2^1=2   0-2 (x)
2^0=1   0-1 (x)
1100

5(5)
2^3=8	5-8 (x)
2^2=4	5-4=1
2^1=2	1-2 (X)
2^0=1   1-1=0
0101
*/

void main() {
	int a = 65 % 2;

	printf("65 [percent letter] 2 = %d\n\n ", a);
	// A % B = [the remainder of division]
	printf(">>>decimal<<<\n");
	printf("decimal : %d\n", 173);
	printf("decimal : %d\n", 0255);
	printf("decimal : %d\n\n", 0xAD);

	printf(">>>octal<<<\n");
	printf("octal : %o\n", 173);
	printf("octal : %o\n", 0255);
	printf("octal : %o\n\n", 0xAD);

	printf(">>>hex<<<\n");
	printf("hex : %x\n", 173);
	printf("hex : %x\n", 0255);
	printf("hex : %x\n\n", 0xAD);

	//cf.Binary numbers are not expressed in the C language
}