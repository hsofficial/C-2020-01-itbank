#include <stdio.h>

void main() {
	/*
	char = 1byte = 8bit
	int = 4byte = 32bit
	float = 4byte = 32bit
	double = 8byte = 64bit
	*/

	int int1 = 28;
	float float1 = 60.0;
	double double1 = 170.1;

	printf("int 1 is : %d\n", int1);
	printf("float1 is : %.2f\n", float1);
	printf("double1 is : %.4lf\n", double1);

}