#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {
	int i;
	//init rand()
	srand((unsigned)time(NULL));

	for (size_t i = 0; i < 5; i++)
	{
		printf("rand() : %d\n", rand() % 100 + 1);
		//rand() % 100 > 0~99 random
	}
}