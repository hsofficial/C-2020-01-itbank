#include <stdio.h>

void main() {
	int score[3];		// int kor, eng, math;
	int sum = 0;
	double avg;

	for (int i = 0; i < 3; i++) {
		if (i == 0)
			printf("kor");
		else if (i == 1)
			printf("eng");
		else if (i == 2)
			printf("mat");
	
	printf(" = input score : ");
	scanf_s("%d", &score[i]);
	sum += score[i];
	}
	
	avg = (double)sum / 3;
	printf("sum : %d, avg : %lf\n", sum, avg);
}