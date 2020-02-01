#include<stdio.h>

void main() {
	int score = 5;

	printf("input num(1-3) : ");
	scanf_s("%d", &score);

	switch (score)
	{
	case 1:
		printf("score is c\n");
		break;
	case 2:
		printf("score is B\n");
		break;
	case 3:
		printf("score is A\n");
		break;
	default:
		printf("wrong menu\n");
		break;
	}
	// break 문이 없으면 아래의 코드를 계속 실행
	// break 문을 만나면 switch 문을 탈출한다
}