#include<stdio.h>

void main() {
	int num;
	while (1)
	{
		printf("input num(1-3) : ");
		scanf_s("%d", &num);

		if (num == 0)
			return;

		switch (num)
		{
		case 1:
			printf("ON\n");
			break;
		case 2:
			printf("OFF\n");
			break;
		case 3:
			printf("STOP\n");
			break;
		default:
			printf("wrong menu\n");
			break;
		}
		// break 문이 없으면 아래의 코드를 계속 실행
		// break 문을 만나면 switch 문을 탈출한다
	}
}