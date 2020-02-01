#include <stdio.h>
#include<stdlib.h>


void main() {
	int cnt = 0;

	while (cnt < 5)
	{
		printf("loop(cnt+1) : %d\n",cnt + 1);
		cnt++;
	}

	printf("cnt after loop : %d\n", cnt);
}