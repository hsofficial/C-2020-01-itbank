#include <stdio.h>
#include<stdlib.h>

void main() {
	int menu;

	while (1)
	{
		printf("1. q[N] = N\n");
		printf("======================================\n");
		printf(" ��ȣ�� �����ϼ���[����-> 0] : ");
		scanf_s("%d", &menu);

		if (menu == 0)
			return;

		switch (menu)
		{
		case 1:
			system("cls");
			q1();
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			q2();
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			q3();
			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");
			q4();
			system("pause");
			system("cls");
			break;

		case 5:
			system("cls");
			q5();
			system("pause");
			system("cls");
			break;
		case 6:
			system("cls");
			q6();
			system("pause");
			system("cls");
			break;
		case 7:
			system("cls");
			fib();
			system("pause");
			system("cls");
			break;

		default:
			printf(" %d �� �޴��� ���� ��ȣ�Դϴ�. \n", menu);

		}
	}

	return 0;
}

/*
1~1000������ ��
�� 3�� ����� ����
3�� ����̸鼭 5�� ����� �������� �ʴ� ����
*/
q1(void) {
	int range, res = 0 , minus = 0;
	printf("input num : ");
	scanf_s("%d", &range);

	for (size_t i = 0; i <= range; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			minus += i;
		}
		else
		{
			continue;
		}
	}

	for (size_t i = 0; i <= range; i++)
	{
		res += i;
	}

	res = res - minus;

	printf("result : %d\n", res);
}

/*
ù���� 1���� �����ϰ�, ���������� ������ 2�踦 �����ϴ� ���
�Ѵ�(30��) ���� ������ �ݾ�
*/
q2(void) {
	int range, bal = 0, input = 1;
	printf("input day range : ");
	scanf_s("%d", &range);

	for (size_t i = 0; i <= range; i++)
	{
		if (i == 0)
		{
			bal = input;
		}
		else
		{
			bal = bal + input;
			input *= 2;
		}
		
	}

	printf("result : %d\n", bal);
}

//��� ��°� ī����
q3(void) {
	int range, cnt = 0;
	int arr[100] = { 0 };

	printf("input num : ");
	scanf_s("%d", &range);

	for (int i = 1; i <= range; i++)
	{
		if (range % i == 0) 
		{
			arr[cnt] = i;
			cnt++;
		}
	}

	printf("divisor : ");

	for (int i = 0; i <= cnt - 1; i++)
	// �迭�� ��� ������ŭ �ݺ� (�迭�� 0���� �����ϹǷ� cnt - 1)
		printf("%d ", arr[i]);
		// �迭�� �ε����� �ݺ����� ���� i�� ����

	printf("\n");
	printf("cnt : %d\n", cnt);
}

//�Ҽ��Ǻ�
q4(void) {
	int num, i;
	printf("input num : ");
	scanf_s("%d", &num);

	for (i = 2 ; i < num ; i++)
	{
		if (num % i == 0)
		{
			printf("Not prime number.\n");
			break;
		}
		else
			continue;
	}

	if (i == num)
		printf("%d is prime number.\n", num);

}

//factorial

q5(void) {
	int num;
	long long int res = 1;
	printf("input num : ");
	scanf_s("%d", &num);

	for (size_t i = 1; i <= num; i++)
	{
		res *= i;
	}

	printf("%d factorial : %lld\n", num, res);
}

q6(void) {
	printf("simple type\n");

	int num1;

	printf("number of stars : ");
	scanf_s("%d", &num1);

	for (int i = 0; i < num1; i++) { // ��(������)�� ��
		for (int j = 0; j < num1; j++) { // ��(������)�� ��
			printf("*");
		}
		printf("\n");
	}

	printf("�����̵�ﰢ��\n");
	printf("line of stars : ");
	scanf_s("%d", &num1);

	for (int i = 0; i < num1 + 1; i++) { // ��(������)�� ��
		for (int j = 0; j < i + 1; j++) { // ��(������)�� ��
			printf("*");
		}
		printf("\n");
	}

	printf("�����̵�ﰢ��-������\n");
	int j;

	printf("line of stars : ");
	scanf_s("%d", &num1);

	for (int i = 0; i < num1; i++) { // ��(������)�� ��
		
		for (j = 0; j < num1 - i ; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i ; j++) { 
			printf("*");
		}

		printf("\n");
	}
}

//�Ҽ��Ǻ�2
primnum_plus(void) {
	int num, count = 0;

	printf("���� �Է� : ");
	scanf_s("%d", &num);
	printf("1 ~ %d ���� �Ҽ��� ���ϴ� ���α׷�\n", num);

	printf("1 ");

	for (int i = 1; i <= num; i++) {

		int j;

		for (j = 2; j < num; j++) {
			if (i % j == 0) {
				break;
			}
		}

		if (i == j) {
			printf("%d ", i);
			count++;
		}
	}
	printf("\n1 ~ %d ������ �Ҽ� ������ %d �� �Դϴ�.\n", num, count);

}

//fib

fib(void) {
	long long int i;
	long long int num;
	long long int head = 0;
	long long int mid = 0;
	long long int rear = 1;

	printf("fib num : ");
	scanf_s("%lld", &num);

	for (i = 0; i < num; i++) {
		printf("%lld ", head);
		mid = head + rear;
		head = rear;
		rear = mid;
	}
}