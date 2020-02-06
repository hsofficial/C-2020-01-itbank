#ifndef __Swap__
#define __Swap__
#include <stdio.h>

void swap(int n1, int n2) {
	int tmp = n1;
	n1 = n2;
	n2 = tmp;
//	printf("in swap>>>n1 = %d, n2 = %d\n", n1, n2);
}

void p_swap(int* p_n1, int* p_n2) {
	int tmp;
	tmp = *p_n1;
	*p_n1 = *p_n2;
	*p_n2 = tmp;
//	printf("in swap>>>p_n1 = %d, p_n2 = %d\n", *p_n1, *p_n2);
}

#endif // !__Swap__
