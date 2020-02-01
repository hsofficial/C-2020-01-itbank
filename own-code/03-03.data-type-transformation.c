#include <stdio.h>

void main() {
	int num1;
	double num2 = 367.78;

	num1 = num2;
	/*
	Inject real-world data into integer variables (space)
	An integer variable does not know the real data (decimal point)
	Therefore, throw away the decimal point(Output Integer Only)
	*/

	printf("num1 = %d \n", num1);

	int num3 = 123;
	double num4;

	num4 = num3;
	/*
	Invert integer data into real-world variables
	put integer data into a real variable, the value is unknown
	*/

	printf("num4 = %d \n", num4);
	//0
	printf("num4 = %lf \n", num4);
	//123.000000
}