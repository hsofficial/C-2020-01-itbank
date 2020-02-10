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
	printf("이름 입력 : ");
	scanf("%s", NewNode->Name);
	printf("%s 학생 나이 입력 : ",NewNode->Name);
	scanf("%d", &NewNode->Age);
	printf("%s 학생 주소 입력 : ", NewNode->Name);
	scanf("%s", NewNode->Address);
	printf("%s 학생 국어 점수 : ", NewNode->Name);
	scanf("%d", &NewNode->Kor);
	printf("%s 학생 수학 점수 : ", NewNode->Name);
	scanf("%d", &NewNode->Math);
	printf("%s 학생 영어 점수 : ", NewNode->Name);
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
		printf("<<<=======메뉴======>>>\n");
		printf("1.학생 등록\n");
		printf("2.학생 검색\n");
		printf("3.학생 목록\n");
		printf("4.학생 수정\n");
		printf("5.학생 삭제\n");
		printf("6.종료\n");
		printf("선택 : ");
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
			printf("\t학생이름\t학생나이\t학생주소\n");
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