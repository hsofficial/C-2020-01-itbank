#include <stdio.h>
#include <string.h>

void strCompare(char* q, char* a) {
	if (strcmp(q, a) == 0)
		printf("correct\n");
	else
		printf("incorrect\n");
}

void main() {
	char que[] = "banana";
	char ans[20];
	printf("input banana\n");

	scanf_s("%s", ans, sizeof(ans));
	strCompare(que, ans);
	
/*
	int i = 0;
	while (question[i] != 0) {
		if (question[i] == answer[i]) {
			i++;
		}
		else {
			printf("�� ���ڿ��� �ٸ��ϴ�\n");
			exit(0);
		}
	}
	printf("�� ���ڿ��� �����ϴ�\n");
*/
}