#include<stdio.h>

void mul(int x, int y);	// 함수 선언부
// 사용자 정의 함수가 main() 함수보다 아래에 존재하면 main()함수에서 호출시 사용자 정의 함수가 없다라고
// 판단한다. main() 함수 위에 사용자 함수의 선언부를 작성하면 main()보다 밑에 작성 할 수 있다.

void main() {
	int num1, num2;
	while (1) {
		printf("숫자를 두 개 입력하세요 (0을 두 번 입력하면 종료) : ");
		scanf_s("%d%d", &num1, &num2);
		if (num1 == 0 && num2 == 0) {
			printf("종료합니다.\n");
			break;
		}
		mul(num1, num2);
		// mul() 함수는 void 이므로 반환이 없다. 따라서 따로 저장 필요없음
	}
}

void mul(int x, int y) {	// 함수 내용부
	int result = x * y;
	printf("%d * %d = %d\n", x, y, result);
}