#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

#define INSERT 1
#define SEARCH 2
#define SHOW 3
#define MODIFY 4
#define DELETE 5
#define EXIT 6

typedef struct Student
{
	char Name[256];
	int Age;
	char Address[256];
	int Kor;
	int Math;
	int Eng;
	int Sum;
	float Avg;
	char Grade;
	struct Student* Next;
}Student;

Student* SetStudentInfomation()
{
	Student* NewNode = (Student*)malloc(sizeof(Student));
	printf("�̸� �Է� : ");
	scanf("%s", NewNode->Name);
	printf("%s �л� ���� �Է� : ",NewNode->Name);
	scanf("%d", &NewNode->Age);
	printf("%s �л� �ּ� �Է� : ", NewNode->Name);
	scanf("%s", NewNode->Address);
	printf("%s �л� ���� ���� : ", NewNode->Name);
	scanf("%d", &NewNode->Kor);
	printf("%s �л� ���� ���� : ", NewNode->Name);
	scanf("%d", &NewNode->Math);
	printf("%s �л� ���� ���� : ", NewNode->Name);
	scanf("%d", &NewNode->Eng);
	NewNode->Sum = NewNode->Kor + NewNode->Math + NewNode->Eng;
	NewNode->Avg = (float)NewNode->Sum / 3.0f;
	if (NewNode->Avg >= 90)
		NewNode->Grade = 'A';
	else if (NewNode->Avg >= 80)
		NewNode->Grade = 'B';
	else if (NewNode->Avg >= 70)
		NewNode->Grade = 'C';
	else if (NewNode->Avg >= 60)
		NewNode->Grade = 'D';
	else
		NewNode->Grade = 'F';
	NewNode->Next = NULL;
	return NewNode;
}

void Insert(Student* *Node)
{
	if ((*Node) == NULL)
	{
		(*Node) = SetStudentInfomation();
		return;
	}
	Insert(&(*Node)->Next);
}

void ShowStudent(Student* Node)
{
	printf("\t\t%s\t\t%d\t%s\n", Node->Name, Node->Age, Node->Address);
}

void ShowSimpleStudentList(Student* Node)
{
	if (Node == NULL)
		return;
	ShowStudent(Node);
	ShowSimpleStudentList(Node->Next);
}

void Release(Student* Node)
{
	if (Node == NULL)
		return;
	Release(Node->Next);
	free(Node);
}

void main()
{
	Student* Head = NULL;
	while (1)
	{
		system("cls");
		printf("<<<=======�޴�======>>>\n");
		printf("1.�л� ���\n");
		printf("2.�л� �˻�\n");
		printf("3.�л� ���\n");
		printf("4.�л� ����\n");
		printf("5.�л� ����\n");
		printf("6.����\n");
		printf("���� : ");
		int Select;
		scanf("%d", &Select);
		switch (Select)
		{
		case INSERT:
			Insert(&Head);
			break;
		case SEARCH:
			break;
		case SHOW:
			printf("<<= = = = Information = = = =>>\n\n");
			printf("\t�л��̸�\t�л�����\t�л��ּ�\n");
			ShowSimpleStudentList(Head);
			break;
		case MODIFY:
			break;
		case DELETE:
			break;
		case EXIT:
			Release(Head);
			return;
		}
		system("pause");
	}
}