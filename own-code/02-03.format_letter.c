#include <stdio.h>

void main() {
	printf("%d %f %c \nascii 65 : %c\n", 10, 0.2, 'C', 65);
	printf("%c, %d, %d \n\n", 65, 0.2, 'c');
	//overflow,underflow
	printf("[apple] price : %d won \n", 1000);

	printf("[apple] weight : %.2f Kg \n", 1.2);
	printf("[apple] weight : %.3f Kg \n", 1.212345);
	//%.[N]f > Outputs up to the 'N'digit below the decimal point

}