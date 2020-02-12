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
		printf("\t1.게임 시작\n");
		printf("\t2.게임 전적\n");
		printf("\t3.게임 종료\n");
		printf("\t>>>"); scanf("%d", &select);

		switch (select) {
		case 1:	//게임시작
			computer = rand() % 100 + 1;	//1 ~ 100중에 임의의 수를 computer에 넣음
			score = 0;	//시도 횟수를 0으로 초기화
			dummy = 3;	//처음 시작하는지 구분, up인지 down인지 구분
						//사용자가 현재 상황을 알아볼수 있는 메시지를 띄어주는 변수
			while (1) {
				system("cls");//위의 메뉴를 안보이게 clear
				if (dummy == 3) {	//시작 메시지 출력
					printf("==== START====\n");
				}
				else if (dummy == 1) {	//player가 computer보다 작으면 up 메시지 출력
					printf("==== U   P====\n");
					score++;
				}
				else if (dummy == 2) {	//player가 computer보다 크면 down 메시지 출력
					printf("====DOWN====\n");
					score++;
				}
				else {	//정답 맞췄을 시
					printf("%d회 까지 진행하셨습니다.\n", score);
					if (min > score) {//현재 게임 점수가 앞에서 했던 점수보다 작으면 최고기록 갱신 메시지 출력
						min = score;
						printf(" ※ 최고 기록 갱신\n");
					}
					system("pause");
					system("cls");
					break;
				}
				//수 입력
				printf("숫자 입력 >>>"); scanf("%d", &player);

				//검사
				if (computer > player) //입력받은 수가 정답보다 큰지 작은지 검사 -> dummy의 숫자 변경
					dummy = 1;
				else if (computer < player)
					dummy = 2;
				else
					dummy = 4;
			}
			break;
		case 2://게임 전적
			if (min == 99) {
				printf("[ 게임을 진행 한 적이 없습니다. ]\n");
				system("pause");
				system("cls");
				break;
			}
			printf(">>> 최고 점수 : %d회 \n", min);
			system("pause");
			system("cls");
			break;
		case 3:
			printf("\tG A M E  E X I T\n");
			exit(1);
		}
	}
}
