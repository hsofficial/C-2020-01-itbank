#include <stdio.h>

void main() {
	int num1, num2, sum;

	printf("input int num1 : ");
	scanf_s("%d", &num1);
	//instead of scanf

	printf("input int num2 : ");
	scanf_s("%d", &num2);

	sum = num1 + num2;
	printf("%d + %d = %d\n\n", num1, num2, sum);

	scanf2();

	scanf3();
}

/*
1.how to use scanf
	Disable SDL check(project settings > c/c++ > SDL > N)

2.scanf_s()
	If you input string, use this code style
		>scanf_s("%s", [string name], sizeof([string name]);
	sizeof() func is return data size
*/

 scanf2(void) {
	int num11, num12, sum1;

	printf("input int num11 and num12 : ");
	scanf_s("%d%d", &num11, &num12);

	printf("num1 = %d\n", num11);
	printf("num2 = %d\n", num12);

	sum1 = num11 + num12;

	printf("num11 + num12 = %d\n\n", sum1);

}

 scanf3(void) {
	 char name1[30], name2[30];

	 printf("input name1(scanf) : ");
	 scanf("%s", name1);
	 printf("name1 : %s\n\n", name1);

	 printf("input name1(scanf_s) : ");
	 scanf_s("%s", name1, sizeof(name1));
	 printf("name1 : %s\n\n", name1);
 }