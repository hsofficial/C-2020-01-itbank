#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define EMPTY 0

typedef struct node {
	int age, kor, eng, math;
	char name[20];
	char address[20];
	struct node* link;
}Linklist;

Linklist* GetNode() {
	Linklist* tmp = (Linklist*)malloc(sizeof(Linklist));
	tmp->link = EMPTY;
	return tmp;
}
void enroll(Linklist** head) {
	Linklist* tmp;
	//head : main의 head의 주소
	//*head : main의 head가 가르키는 주소
	tmp = *head;
	if (tmp == EMPTY) { //main의 head가 가르키는 주소가 비어있으면
		*head = GetNode();//main의 head에게 heap영역의 공간 주소저장
		printf("주의 : 반드시 자료형에 맞는 값을 입력하세요\n");
		printf("학생 이름 입력 : "); scanf("%s", (*head)->name);
		printf("학생 나이 입력 : "); scanf("%d", &(*head)->age);
		printf("학생 주소 입력 : "); scanf("%s", (*head)->address);
		printf("학생 국어 입력 : "); scanf("%d", &(*head)->kor);
		printf("학생 영어 입력 : "); scanf("%d", &(*head)->eng);
		printf("학생 수학 입력 : "); scanf("%d", &(*head)->math);
		printf("학생 정보 입력 완료\n");
	}
	else
		enroll(&(*head)->link);//재귀함수 호출
}

void search(Linklist** head, char sname[20]) {
	if (*head == EMPTY) {
		printf("검색하고자 하는 학생이 존재하지 않습니다.\n");
	}
	//name, sname : 배열의 시작주소
	//name == sname => 주소가 같냐고 물어봐요
	//strcmp(name,sname) => 같으면 0, 다르면 1, -1을 반환
	//!를 찍어주면 0이 1로 1이 0으로 됩니다.
	else if (!strcmp((*head)->name, sname)) {
		int sum = (*head)->kor + (*head)->eng + (*head)->math;
		double avg = sum / 3.0;
		char grade;
		printf("학생이름 : %s\n", (*head)->name);
		printf("학생나이 : %d세\n", (*head)->age);
		printf("학생주소 : %s\n", (*head)->address);
		printf("국어점수 : %d점\n", (*head)->kor);
		printf("영어점수 : %d점\n", (*head)->eng);
		printf("수학점수 : %d점\n", (*head)->math);
		printf("합계점수 : %d점\n", sum);
		printf("평균점수 : %.2f점\n", avg);
		if (avg > 90 && avg < 101)
			grade = 'A';
		else if (avg > 80 && avg < 91)
			grade = 'B';
		else if (avg > 70 && avg < 81)
			grade = 'C';
		else if (avg > 60 && avg < 71)
			grade = 'D';
		else
			grade = 'F';
		printf("학생등급 : %c\n", grade);
	}
	else
		search(&(*head)->link, sname);
}

void list(Linklist** head) {
	Linklist* tmp = *head;//tmp에 *head를 저장
	printf("<<<=====information=====>>>\n\n");
	printf("%12s%12s%12s\n", "학생이름", "학생나이", "학생주소");
	while (tmp != EMPTY) {//tmp가 빈 곳이 아닌곳을 가르키면 반복
		printf("%12s%12d%12s\n", tmp->name, tmp->age, tmp->address);
		tmp = tmp->link; //다음주소로 넘어감
	}
	printf("학생 개개인의 점수는 검색을 이용하세요!!\n");
}

void modify(Linklist** head, char* mname) {
	char mname2[20];
	char maddress[20];
	int menu, mage, cwhile = 1, subwhile = 1, submenu;

	if (*head == EMPTY) {
		printf("수정하고자 하는 학생이 존재하지 않습니다.\n");
	}
	//!strcmp((*head)->name, mname)
	else if (strcmp((*head)->name, mname) == 0) {
		while (cwhile) {
			search(head, (*head)->name);

			printf("\n\n수정할 항목을 선택하시오\n");
			printf("1.이름\t2.나이\t3.주소\t4.점수\t5.수정종료\n");
			printf("선택 : ");
			scanf("%d", &menu);
			printf("====================\n");
			switch (menu)
			{
			case 1:
				printf("현재 이름 : %s\n", (*head)->name);
				printf("수정할 이름 : ");
				scanf("%s", mname2);
				printf("%s -> %s로 이름 수정 완료\n", (*head)->name, mname2);
				//strcpy(복사본,원본) : 원본의 문자열을 복사본으로 복사
				strcpy((*head)->name, mname2);
				break;
			case 2:
				printf("주의 : 반드시 자료형에 맞는 값을 입력하세요\n");
				printf("현재 나이 : %d\n", (*head)->age);
				printf("수정할 나이 : ");
				scanf("%d", &mage);
				printf("%d -> %d로 나이 수정 완료\n", (*head)->age, mage);
				(*head)->age = mage;
				break;
			case 3:
				printf("현재 주소 : %s\n", (*head)->address);
				printf("수정할 주소 : ");
				scanf("%s", maddress);
				printf("%s -> %s로 주소 수정 완료\n", (*head)->address, maddress);
				strcpy((*head)->address, maddress);
				break;
			case 4:
				printf("현재 점수\n");
				printf("국어 : %d 영어 : %d 수학 : %d\n", (*head)->kor, (*head)->eng, (*head)->math);
				printf("====================\n");
				printf("주의 : 반드시 자료형에 맞는 값을 입력하세요\n");
				/*simple type
				printf("수정할 국어 점수 : "); scanf("%d", &(*head)->kor);
				printf("수정할 영어 점수 : "); scanf("%d", &(*head)->eng);
				printf("수정할 수학 점수 : "); scanf("%d", &(*head)->math);
				*/
				while (subwhile) {
					printf("\n\n수정할 항목을 선택하시오\n");
					printf("1.국어\t2.영어\t3.수학\t4.수정종료\n");
					printf("선택 : ");
					scanf("%d", &submenu);
					switch (submenu)
					{
					case 1:
						printf("수정할 국어 점수 : "); scanf("%d", &(*head)->kor);
						break;
					case 2:
						printf("수정할 영어 점수 : "); scanf("%d", &(*head)->eng);
						break;
					case 3:
						printf("수정할 수학 점수 : "); scanf("%d", &(*head)->math);
						break;
					case 4:
						//while문을 끝내기위해 subhile에 0을 대입
						subwhile = 0;
						break;

					default:
						printf("잘못된 번호를 입력하셨습니다\n");
						break;
					}
				}

				break;
			case 5:
				//while문을 끝내기위해 cwhile에 0을 대입
				cwhile = 0;
				break;
			default:
				printf("잘못된 번호를 입력하셨습니다\n");
				break;
			}
			system("pause");
			system("cls");
		}
	}
	else
		modify(&(*head)->link, mname);
}

void del(Linklist** head, char dname[20]) {
	Linklist* tmp = *head;
	if (tmp == EMPTY) {
		printf("삭제하고자 하는 학생이 존재하지 않습니다.\n");
		return;
	}
	else if (!strcmp((*head)->name, dname)) {
		printf("삭제되었습니다.\n");
		*head = tmp->link;
		free(tmp);
	}
	else
		del(&(*head)->link, dname);
}
int main() {
	Linklist* head = EMPTY;
	int menu;
	char sname[20], dname[20], mname[20];
	while (1) {
		printf("< < < = = = = 메뉴 = = = = > > > \n\n");
		printf("1.학생 등록\n");
		printf("2.학생 검색\n");
		printf("3.학생 목록 \n");
		printf("4.학생 수정 \n");
		printf("5.학생 삭제\n");
		printf("6.종료 \n");
		printf("선택 : ");
		scanf("%d", &menu);
		system("cls");
		switch (menu)
		{
		case 1:
			enroll(&head);
			break;
		case 2:
			printf("< < = = = = = information = = = = = > >\n");
			printf("검색할 이름 입력 : ");
			scanf("%s", sname);
			printf("학생 정보 검색 완료\n");
			search(&head, sname);
			break;
		case 3:
			list(&head);
			break;
		case 4:
			printf("수정할 학생의 이름은?");
			scanf("%s", mname);
			modify(&head, mname);
			break;
		case 5:
			printf("삭제할 이름을 입력하세요 : ");
			scanf("%s", dname);
			del(&head, dname);
			break;
		case 6:
			printf("프로그램을 종료합니다\n");
			exit(0);
			break;
		default:
			printf("잘못된 번호를 입력하셨습니다\n");
			break;
		}
		system("pause");
		system("cls");
	}

}