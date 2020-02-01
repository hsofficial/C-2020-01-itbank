#include<stdio.h>

void main() {
	int age;
	printf("age : ");
	scanf_s("%d", &age);
	/*
	if (age > 20) {
		printf("성인");
	}
	if (age < 20) {
		printf("미성년자");
	}
	*/
	if (age >= 20) 
		printf("성인");
	else
		printf("미성년자");
	printf("입니다\n");
}