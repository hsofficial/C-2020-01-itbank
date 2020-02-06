#include<stdio.h>
#include "15-03-01.swap.h"

void main() {
	int num1 = 10, num2 = 20;

	swap(num1, num2);
	//value 전달
	//main의 변수 num1 num2는 불변
	printf("after swap > num1 = %d, num2 = %d\n", num1, num2);

	p_swap(&num1, &num2);
	//value's address 전달
	//main variable address 전달
	//전달받은 func에서 ptr로 value 수정시 main variable 값도 바뀜
	printf("after p_swap > num1 = %d, num2 = %d\n", num1, num2);

}