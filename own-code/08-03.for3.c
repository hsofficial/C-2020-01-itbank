#include<stdio.h>

void main() {
	int num1, num2, odd = 0, even = 0;

	for (num1 = 1, num2 = 2; (num1 <= 100 && num2 <= 100); num1 += 2, num2 += 2)
	{
		odd += num1;
		even += num2;
	}
	// 초기값을 두개로 각각 두어, 증감을 따로 한다


	printf("odd : %d, even : %d\n", odd, even);
}