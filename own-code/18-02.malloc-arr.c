#include <stdio.h>
#include <stdlib.h>

void main() {
	char* ptr;
	int count, i;

	printf("만들 공간의 개수 : ");
	scanf_s("%d", &count);

	ptr = (char*)malloc(sizeof(char) * count);
	//sizeof(char)*count만큼 heap에 malloc(1byte * cnt)
	//malloc 내에서 연속으로 cnt개 생성 > arr
	//return > char 시작주소
	//주소저장 > ptr

	for (int i = 0; i < count; i++)
	{
		ptr[i] = i + 1;
		printf("%d\n", ptr[i]);
	}

	free(ptr);
}