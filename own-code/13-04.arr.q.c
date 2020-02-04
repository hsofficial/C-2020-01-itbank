#include <stdio.h>
#include<stdlib.h>

void main() {
	int menu;

	while (1)
	{
		printf("1. q[N] = N\n");
		printf("======================================\n");
		printf(" 번호를 선택하세요[종료-> 0] : ");
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

/*		case 3:
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
*/
		default:
			printf(" %d 는 메뉴에 없는 번호입니다. \n", menu);

		}
	}

	return 0;
}

// 1.배열에 입력받아 거꾸로 출력
q1() {
	int arr[1000];
	int size = 0;

	printf("input data size : ");
	scanf_s("%d", &size);

	for (int i = 0; i < size; i++)
	{
		printf("input num[%d] : ", i);
		scanf_s("%d", &arr[i]);
	}

	printf("result : ");
	for (int i = size - 1; i >= 0; i--)
		printf("%d ", arr[i]);

	printf("end\n");
}

//q2.k개의 숫자를 입력받고 그 숫자들을 두번 출력
q2() {
	int arr[1000];
	int size = 0;

	printf("input size : ");
	scanf_s("%d", &size);

	for (int i = 0; i < size; i++)
	{
		printf("input num[%d] : ", i);
		scanf_s("%d", &arr[i]);
	}

	printf("result : ");

	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);

	printf("\n");

	printf("result : ");

	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);

	printf("end\n");
}