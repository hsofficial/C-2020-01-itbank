#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {
	int player, computer;
	int select, dummy;
	int score, min = 99;

	srand((unsigned)time(NULL));

	while (1) {
		printf("  [[[ UP & DOWN Game ]]]  \n");
		printf("\t1.���� ����\n");
		printf("\t2.���� ����\n");
		printf("\t3.���� ����\n");
		printf("\t>>>"); scanf("%d", &select);

		switch (select) {
		case 1:	//���ӽ���
			computer = rand() % 100 + 1;	//1 ~ 100�߿� ������ ���� computer�� ����
			score = 0;	//�õ� Ƚ���� 0���� �ʱ�ȭ
			dummy = 3;	//ó�� �����ϴ��� ����, up���� down���� ����
						//����ڰ� ���� ��Ȳ�� �˾ƺ��� �ִ� �޽����� ����ִ� ����
			while (1) {
				system("cls");//���� �޴��� �Ⱥ��̰� clear
				if (dummy == 3) {	//���� �޽��� ���
					printf("==== START====\n");
				}
				else if (dummy == 1) {	//player�� computer���� ������ up �޽��� ���
					printf("==== U   P====\n");
					score++;
				}
				else if (dummy == 2) {	//player�� computer���� ũ�� down �޽��� ���
					printf("====DOWN====\n");
					score++;
				}
				else {	//���� ������ ��
					printf("%dȸ ���� �����ϼ̽��ϴ�.\n", score);
					if (min > score) {//���� ���� ������ �տ��� �ߴ� �������� ������ �ְ��� ���� �޽��� ���
						min = score;
						printf(" �� �ְ� ��� ����\n");
					}
					system("pause");
					system("cls");
					break;
				}
				//�� �Է�
				printf("���� �Է� >>>"); scanf("%d", &player);

				//�˻�
				if (computer > player) //�Է¹��� ���� ���亸�� ū�� ������ �˻� -> dummy�� ���� ����
					dummy = 1;
				else if (computer < player)
					dummy = 2;
				else
					dummy = 4;
			}
			break;
		case 2://���� ����
			if (min == 99) {
				printf("[ ������ ���� �� ���� �����ϴ�. ]\n");
				system("pause");
				system("cls");
				break;
			}
			printf(">>> �ְ� ���� : %dȸ \n", min);
			system("pause");
			system("cls");
			break;
		case 3:
			printf("\tG A M E  E X I T\n");
			exit(1);
		}
	}
}
