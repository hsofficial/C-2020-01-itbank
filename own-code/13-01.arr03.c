#include<stdio.h>

void main() {
	char arr[10];
	scanf_s("%s", arr, sizeof(arr));

	for (int i = 0; i < 10; i++) {
		printf("arr[%d] = %c\n", i, arr[i]);
	}

	int j = 0;
	while (1) {
		if (arr[j] == '\0') // \0 = NULL 을 의미
			break;
		// 문자를 하나씩 검사
		//NULL을 만나면(문자열의 끝) 반복종료

		printf("%c\n", arr[j]);
		j++;
		
	}

	j = 0;
	printf("\narr = ");
	while (1) {	//문자 하나씩 출력 시작
		if (arr[j] == NULL)	// NULL을 만날때 까지 출력
			break;

		printf("%c", arr[j]);
		j++;
	}
	printf("\n");

	printf("\narr = %s\n", arr);
	// %s는 문자열 배열의 시작주소 부터 NULL을 만날때 까지 알아서 문자열을 출력
	// 그렇기 때문에 문자열 마지막에는 NULL이 들어갈 공간이 꼭 필요
}