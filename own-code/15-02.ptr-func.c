#include<stdio.h>

void swap(int n1, int n2) {
	int tmp = n1;
	n1 = n2;
	n2 = tmp;
	printf("in swap>>>n1 = %d, n2 = %d\n", n1, n2);
}

void p_swap(int* p_n1, int* p_n2) {
	int tmp;
	tmp = *p_n1;
	*p_n1 = *p_n2;
	*p_n2 = tmp;
	printf("in swap>>>p_n1 = %d, p_n2 = %d\n", *p_n1, *p_n2);
}

void main() {
	int num1 = 10, num2 = 20;

	swap(num1, num2);
	//value 전달
	//main의 변수 num1 num2는 불변
	printf("num1 = %d, num2 = %d\n", num1, num2);

	p_swap(&num1, &num2);
	//value's address 전달
	//main variable address 전달
	//전달받은 func에서 ptr로 value 수정시 main variable 값도 바뀜
	printf("num1 = %d, num2 = %d\n", num1, num2);

}