#include<stdio.h>
// ����ü�� ũ��� ��� ������ �ڷ��� �� ����ū �ڷ����� �������� �޸𸮸� ä�� ����
typedef struct student {
	char name;			// => char = 1byte
	double weight;		// => double = 8byte
	char address[5];	// => char = 1byte
	int age;			// => int = 4byte
	// ���� ū �ڷ����� double => �׷���? ���� 8byte?? => �׷��� 32byte�ΰ�? => ��!!!
}Student;


void main() {
	Student s1;
	printf("s1�� �������� ũ�� : %d\n", sizeof(s1));	// ��°���� 24byte
}

/*
	����ü�� ũ��� 
	������ ����Ǿ� �� �� ���� ���� ū �ڷ���ũ��� �����ȴ�.
	����, ���� �ڷ����� �����ؾ� �Ҷ� �տ� ���� �޸��� ������ ����ϸ� ���� ������ �ʰ� ä���
	���ڶ� ��� �޸𸮸� ���� ū�ڷ��� ũ��� ���� �����

*/