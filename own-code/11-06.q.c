#include <stdio.h>
#include<stdlib.h>
#include"11-03.header.h"

void main() {
	int menu, num1, num2;
	printf("input num [1] [2] : ");
	scanf_s("%d%d", &num1, &num2);
	

	while (1)
	{
		printf("======================================\n");
		printf("1. ���ϱ�\n");
		printf("2. ����\n");
		printf("3. ���ϱ�\n");
		printf("4. ������\n");
		printf("======================================\n");
		printf(" ��ȣ�� �����ϼ���[����-> 0] : ");
		scanf_s("%d", &menu);

		if (menu == 0)
			return;

		switch (menu)
		{
		case 1:
			printf("%d + %d = %d\n", num1, num2, sum(num1, num2));
			system("pause");		
			break;
		case 2:
			printf("%d - %d = %d\n", num1, num2, minus(num1, num2));
			system("pause");
			break;

		case 3:
			printf("%d * %d = %d\n", num1, num2, mul(num1, num2));
			system("pause");
			break;
		case 4:
			printf("%d \/ %d = %.3lf\n",num1, num2,divi(num1, num2));
			system("pause");
			break;

		default:
			printf(" %d �� �޴��� ���� ��ȣ�Դϴ�. \n", menu);

		}
	}

	return 0;
}