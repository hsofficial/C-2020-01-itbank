#include<stdio.h>
#include<stdlib.h>

void main() {
	for (size_t i = 0; i < 50; i++)
	{
		printf("rand() : %d\n", rand());
	}
}