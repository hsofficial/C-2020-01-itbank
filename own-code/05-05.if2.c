#include<stdio.h>

void main() {
	int age;
	printf("age : ");
	scanf_s("%d", &age);
	/*
	if (age > 20) {
		printf("����");
	}
	if (age < 20) {
		printf("�̼�����");
	}
	*/
	if (age >= 20) 
		printf("����");
	else
		printf("�̼�����");
	printf("�Դϴ�\n");
}