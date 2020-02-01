#include <stdio.h>

void main() {
	printf(">>>q1<<<\n");
	q1();
	printf(">>>q2<<<\n");
	q2();
	printf(">>>q3<<<\n");
	q3();
	printf(">>>q4<<<\n");
	q4();
}

q1(void) {
	double num1;

	printf("input num1(double) : ");
	scanf_s("%d", &num1);
	printf("===========================\n");
	printf("num 1 is %d\n\n", num1);
}

q2(void) {
	int kor, mat, eng, sum1;
	float avg;

	printf("input [kor] [eng] [mat] : ");
	scanf_s("%d%d%d", &kor, &eng, &mat);
	
	printf("===========================\n");

	printf("kr = %d, en = %d, math = %d\n", kor, eng, mat);

	sum1 = kor + eng + mat;
	avg = sum1 / 3;

	printf("sum = %d, avg = %.3f\n\n", sum1, avg);
}

q3(void) {
	char name[30];
	int age;

	printf("input name(scanf_s) : ");
	scanf_s("%s", name, sizeof(name));

	printf("input age : ");
	scanf_s("%d", &age);

	printf("===========================\n");

	printf("name(age) : %s (%d)\n\n", name, age);
}

q4(void) {
	int numx;
	printf("input numx : ");
	scanf_s("%d", &numx);

	printf("===========================\n");

	for (size_t i = 1; i <= 9; i++)
	{
		printf("%d X %d = %d\n", numx, i, numx * i);
	}
}