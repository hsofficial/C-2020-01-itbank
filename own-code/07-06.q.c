#include<stdio.h>

void main() {
	int num;
	int cnt = 1;

	printf("input num : ");
	scanf_s("%d", &num);

	while (cnt <= num)
	{	
		printf("%d * %d = %d\n", num, cnt, cnt * num);
		cnt++;
	}
	printf("==========\n");

	printf("input num : ");
	scanf_s("%d", &num);

	while (num > 0)
	{
		printf("%d ", num);
		num--;
	}
	printf("\n");
	printf("==========\n");

	printf("input num : ");
	scanf_s("%d", &num);

	do
	{
		printf("%d", num % 10);
		num = num / 10;

	} while (num);
	printf("\n");
	printf("==========\n");

}