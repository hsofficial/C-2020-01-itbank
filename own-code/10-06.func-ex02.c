#include<stdio.h>

void mul(int x, int y);	// �Լ� �����
// ����� ���� �Լ��� main() �Լ����� �Ʒ��� �����ϸ� main()�Լ����� ȣ��� ����� ���� �Լ��� ���ٶ��
// �Ǵ��Ѵ�. main() �Լ� ���� ����� �Լ��� ����θ� �ۼ��ϸ� main()���� �ؿ� �ۼ� �� �� �ִ�.

void main() {
	int num1, num2;
	while (1) {
		printf("���ڸ� �� �� �Է��ϼ��� (0�� �� �� �Է��ϸ� ����) : ");
		scanf_s("%d%d", &num1, &num2);
		if (num1 == 0 && num2 == 0) {
			printf("�����մϴ�.\n");
			break;
		}
		mul(num1, num2);
		// mul() �Լ��� void �̹Ƿ� ��ȯ�� ����. ���� ���� ���� �ʿ����
	}
}

void mul(int x, int y) {	// �Լ� �����
	int result = x * y;
	printf("%d * %d = %d\n", x, y, result);
}