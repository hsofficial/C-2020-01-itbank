#include<stdio.h>

void main() {
	
		int menu, num1, num2;
		double ans;

		printf("input num[1] [2] : ");
		scanf_s("%d%d", &num1, &num2);

while (1)
	{
		printf("1=plus\n2=minus\n3=multiply\n4=divison\n");

		printf("input menu(1-4) : ");
		scanf_s("%d", &menu);

		if (menu == 0)
			return;

		switch (menu)
		{
		case 1:
			ans = num1 + num2;
			printf("%d + %d = %.f\n", num1, num2, ans);
			break;
		case 2:
			ans = num1 - num2;
			printf("%d - %d = %.f\n", num1, num2, ans);
			break;
		case 3:
			ans = num1 * num2;
			printf("%d * %d = %.2f\n", num1, num2, ans);
			break;
		case 4:
			ans = num1 / num2;
			printf("%d / %d = %.2f\n", num1, num2, ans);
			break;
		default:
			printf("wrong menu\n");
			break;
		}
	}

}