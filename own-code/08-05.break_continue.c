#include<stdio.h>

void main() {
	int num1;

	for (num1 = 0; num1 <= 5; num1++){
		printf("num1 = %d\n", num1);

		if (num1 == 3) {
			printf("%d�϶� continue�� ���� �Ʒ��ڵ� ����(x)\n", num1);
			continue;
			//continue���� ������ �ؿ� ������ �������� �ʰ� �ݺ����� �ٽ� ó������ ���� 
			
			printf("%d�϶� break�� ����\n", num1);
			break;
			//break�� ������ �� �������� for���� ����ǰ� �ٱ����� ����
		}

	}
	printf("for�� ���� num1 : %d\n", num1);
}
