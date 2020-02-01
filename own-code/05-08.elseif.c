#include<stdio.h>

void main() {
	int kor, eng, mat;
	double avg = 0;

	printf("3과목 성적 입력 (국,영,수) : ");
	scanf_s("%d%d%d", &kor, &eng, &mat);

	avg = (double) (kor + eng + mat) / 3;

	if (avg < 70) {
		printf("불\n");
	}
	else if (kor < 60 || eng < 60 || mat < 60)
	{
		printf("avg > 70 이지만 과락\n");
	}
	else
	{
		printf("합\n");
	}
}