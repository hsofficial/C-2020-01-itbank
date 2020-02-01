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
	//head : main�� head�� �ּ�
	//*head : main�� head�� ����Ű�� �ּ�
	tmp = *head;
	if (tmp == EMPTY) { //main�� head�� ����Ű�� �ּҰ� ���������
		*head = GetNode();//main�� head���� heap������ ���� �ּ�����
		printf("���� : �ݵ�� �ڷ����� �´� ���� �Է��ϼ���\n");
		printf("�л� �̸� �Է� : "); scanf("%s", (*head)->name);
		printf("�л� ���� �Է� : "); scanf("%d", &(*head)->age);
		printf("�л� �ּ� �Է� : "); scanf("%s", (*head)->address);
		printf("�л� ���� �Է� : "); scanf("%d", &(*head)->kor);
		printf("�л� ���� �Է� : "); scanf("%d", &(*head)->eng);
		printf("�л� ���� �Է� : "); scanf("%d", &(*head)->math);
		printf("�л� ���� �Է� �Ϸ�\n");
	}
	else
		enroll(&(*head)->link);//����Լ� ȣ��
}

void search(Linklist** head, char sname[20]) {
	if (*head == EMPTY) {
		printf("�˻��ϰ��� �ϴ� �л��� �������� �ʽ��ϴ�.\n");
	}
	//name, sname : �迭�� �����ּ�
	//name == sname => �ּҰ� ���İ� �������
	//strcmp(name,sname) => ������ 0, �ٸ��� 1, -1�� ��ȯ
	//!�� ����ָ� 0�� 1�� 1�� 0���� �˴ϴ�.
	else if (!strcmp((*head)->name, sname)) {
		int sum = (*head)->kor + (*head)->eng + (*head)->math;
		double avg = sum / 3.0;
		char grade;
		printf("�л��̸� : %s\n", (*head)->name);
		printf("�л����� : %d��\n", (*head)->age);
		printf("�л��ּ� : %s\n", (*head)->address);
		printf("�������� : %d��\n", (*head)->kor);
		printf("�������� : %d��\n", (*head)->eng);
		printf("�������� : %d��\n", (*head)->math);
		printf("�հ����� : %d��\n", sum);
		printf("������� : %.2f��\n", avg);
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
		printf("�л���� : %c\n", grade);
	}
	else
		search(&(*head)->link, sname);
}

void list(Linklist** head) {
	Linklist* tmp = *head;//tmp�� *head�� ����
	printf("<<<=====information=====>>>\n\n");
	printf("%12s%12s%12s\n", "�л��̸�", "�л�����", "�л��ּ�");
	while (tmp != EMPTY) {//tmp�� �� ���� �ƴѰ��� ����Ű�� �ݺ�
		printf("%12s%12d%12s\n", tmp->name, tmp->age, tmp->address);
		tmp = tmp->link; //�����ּҷ� �Ѿ
	}
	printf("�л� �������� ������ �˻��� �̿��ϼ���!!\n");
}

void modify(Linklist** head, char* mname) {
	char mname2[20];
	char maddress[20];
	int menu, mage, cwhile = 1, subwhile = 1, submenu;

	if (*head == EMPTY) {
		printf("�����ϰ��� �ϴ� �л��� �������� �ʽ��ϴ�.\n");
	}
	//!strcmp((*head)->name, mname)
	else if (strcmp((*head)->name, mname) == 0) {
		while (cwhile) {
			search(head, (*head)->name);

			printf("\n\n������ �׸��� �����Ͻÿ�\n");
			printf("1.�̸�\t2.����\t3.�ּ�\t4.����\t5.��������\n");
			printf("���� : ");
			scanf("%d", &menu);
			printf("====================\n");
			switch (menu)
			{
			case 1:
				printf("���� �̸� : %s\n", (*head)->name);
				printf("������ �̸� : ");
				scanf("%s", mname2);
				printf("%s -> %s�� �̸� ���� �Ϸ�\n", (*head)->name, mname2);
				//strcpy(���纻,����) : ������ ���ڿ��� ���纻���� ����
				strcpy((*head)->name, mname2);
				break;
			case 2:
				printf("���� : �ݵ�� �ڷ����� �´� ���� �Է��ϼ���\n");
				printf("���� ���� : %d\n", (*head)->age);
				printf("������ ���� : ");
				scanf("%d", &mage);
				printf("%d -> %d�� ���� ���� �Ϸ�\n", (*head)->age, mage);
				(*head)->age = mage;
				break;
			case 3:
				printf("���� �ּ� : %s\n", (*head)->address);
				printf("������ �ּ� : ");
				scanf("%s", maddress);
				printf("%s -> %s�� �ּ� ���� �Ϸ�\n", (*head)->address, maddress);
				strcpy((*head)->address, maddress);
				break;
			case 4:
				printf("���� ����\n");
				printf("���� : %d ���� : %d ���� : %d\n", (*head)->kor, (*head)->eng, (*head)->math);
				printf("====================\n");
				printf("���� : �ݵ�� �ڷ����� �´� ���� �Է��ϼ���\n");
				/*simple type
				printf("������ ���� ���� : "); scanf("%d", &(*head)->kor);
				printf("������ ���� ���� : "); scanf("%d", &(*head)->eng);
				printf("������ ���� ���� : "); scanf("%d", &(*head)->math);
				*/
				while (subwhile) {
					printf("\n\n������ �׸��� �����Ͻÿ�\n");
					printf("1.����\t2.����\t3.����\t4.��������\n");
					printf("���� : ");
					scanf("%d", &submenu);
					switch (submenu)
					{
					case 1:
						printf("������ ���� ���� : "); scanf("%d", &(*head)->kor);
						break;
					case 2:
						printf("������ ���� ���� : "); scanf("%d", &(*head)->eng);
						break;
					case 3:
						printf("������ ���� ���� : "); scanf("%d", &(*head)->math);
						break;
					case 4:
						//while���� ���������� subhile�� 0�� ����
						subwhile = 0;
						break;

					default:
						printf("�߸��� ��ȣ�� �Է��ϼ̽��ϴ�\n");
						break;
					}
				}

				break;
			case 5:
				//while���� ���������� cwhile�� 0�� ����
				cwhile = 0;
				break;
			default:
				printf("�߸��� ��ȣ�� �Է��ϼ̽��ϴ�\n");
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
		printf("�����ϰ��� �ϴ� �л��� �������� �ʽ��ϴ�.\n");
		return;
	}
	else if (!strcmp((*head)->name, dname)) {
		printf("�����Ǿ����ϴ�.\n");
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
		printf("< < < = = = = �޴� = = = = > > > \n\n");
		printf("1.�л� ���\n");
		printf("2.�л� �˻�\n");
		printf("3.�л� ��� \n");
		printf("4.�л� ���� \n");
		printf("5.�л� ����\n");
		printf("6.���� \n");
		printf("���� : ");
		scanf("%d", &menu);
		system("cls");
		switch (menu)
		{
		case 1:
			enroll(&head);
			break;
		case 2:
			printf("< < = = = = = information = = = = = > >\n");
			printf("�˻��� �̸� �Է� : ");
			scanf("%s", sname);
			printf("�л� ���� �˻� �Ϸ�\n");
			search(&head, sname);
			break;
		case 3:
			list(&head);
			break;
		case 4:
			printf("������ �л��� �̸���?");
			scanf("%s", mname);
			modify(&head, mname);
			break;
		case 5:
			printf("������ �̸��� �Է��ϼ��� : ");
			scanf("%s", dname);
			del(&head, dname);
			break;
		case 6:
			printf("���α׷��� �����մϴ�\n");
			exit(0);
			break;
		default:
			printf("�߸��� ��ȣ�� �Է��ϼ̽��ϴ�\n");
			break;
		}
		system("pause");
		system("cls");
	}

}