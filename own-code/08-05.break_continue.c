#include<stdio.h>

void main() {
	int num1;

	for (num1 = 0; num1 <= 5; num1++){
		printf("num1 = %d\n", num1);

		if (num1 == 3) {
			printf("%d일때 continue를 만남 아래코드 실행(x)\n", num1);
			continue;
			//continue문을 만나면 밑에 문장을 실행하지 않고 반복문을 다시 처음부터 실행 
			
			printf("%d일때 break를 만남\n", num1);
			break;
			//break를 만나면 그 시점에서 for문이 종료되고 바깥으로 나감
		}

	}
	printf("for문 밖의 num1 : %d\n", num1);
}
