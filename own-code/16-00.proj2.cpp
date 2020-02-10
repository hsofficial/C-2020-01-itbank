#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

#define INSERT 1
#define PREORDER 2
#define INORDER 3
#define POSTORDER 4
#define SEARCH 5
#define DELETE 6
#define EXIT 7

typedef struct Node
{
	int Data;
	struct Node * Left;
	struct Node * Right;
}Node;

void PreOrder(Node* node);

void Insert(Node* *node,int Data)
{
	if ((*node) == NULL)
	{
		(*node) = (Node*)malloc(sizeof(Node));
		(*node)->Data = Data;
		(*node)->Left = NULL;
		(*node)->Right = NULL;
		return;
	}
	if ((*node)->Data > Data)
		Insert(&(*node)->Left, Data);
	else if((*node)->Data < Data)
		Insert(&(*node)->Right, Data);
	else
	{
		printf("해당 데이터가 존재합니다.\n");
		return;
	}
}

void Search(Node* node,int Data)
{
	if (node->Data == Data)
	{
		printf("%d를 찾았습니다.", Data);
		return;
	}
	else if (node->Data > Data && node->Left != NULL)
		Search(node->Left, Data);
	else if (node->Data < Data && node->Right != NULL)
		Search(node->Right, Data);
}

void Release(Node* node)
{
	if (node == NULL)
		return;

	if (node->Left != NULL)
		PreOrder(node->Left);
	if (node->Right != NULL)
		PreOrder(node->Right);
	free(node);
}

void PostOrder(Node* node)
{
	if (node == NULL)
		return;
	
	if (node->Left != NULL)
		PreOrder(node->Left);
	if (node->Right != NULL)
		PreOrder(node->Right);
	printf("%d ", node->Data);
}

void InOrder(Node* node)
{
	if (node == NULL)
		return;
	
	if (node->Left != NULL)
		PreOrder(node->Left);
	printf("%d ", node->Data);
	if (node->Right != NULL)
		PreOrder(node->Right);
}

void PreOrder(Node* node)
{
	if (node == NULL)
		return;
	printf("%d ", node->Data);
	if (node->Left != NULL)
		PreOrder(node->Left);
	if (node->Right != NULL)
		PreOrder(node->Right);
}

Node* FindRightMinNode(Node* *node)
{
	if ((*node)->Left == NULL)
	{
		Node* ReturnNode = (*node);
		(*node) = (*node)->Right;
		return ReturnNode;
	}
	FindRightMinNode(&(*node)->Left);
}

void Delete(Node* *node,int Data)
{
	if ((*node) == NULL)
		return;
	else if ((*node)->Data == Data)
	{
		Node* DeleteNode = *node;
		if (DeleteNode->Left != NULL && DeleteNode->Right != NULL)
		{
			*node = FindRightMinNode(&(*node)->Right);
			(*node)->Left = DeleteNode->Left;
			(*node)->Right = DeleteNode->Right;
		}
		else if (DeleteNode->Left != NULL)
			*node = DeleteNode->Left;
		else
			*node = DeleteNode->Right;
		free(DeleteNode);
	}
	else if ((*node)->Data > Data)
		Delete(&(*node)->Left, Data);
	else if ((*node)->Data < Data)
		Delete(&(*node)->Right, Data);
}

void main()
{
	Node* Root = NULL;
	while (1)
	{
		system("cls");
		printf("===Tree===\n");
		printf("1.Insert\n");
		printf("2.PreOrder\n");
		printf("3.InOrder\n");
		printf("4.PostOrdert\n");
		printf("5.Search\n");
		printf("6.Delete\n");
		printf("7.종료\n");
		int Select;
		printf("입력 : ");
		scanf("%d", &Select);
		switch (Select)
		{
		case INSERT:
			printf("정보 입력 : ");
			scanf("%d", &Select);
			Insert(&Root, Select);
			break;
		case PREORDER:
			PreOrder(Root);
			break;
		case INORDER:
			InOrder(Root);
			break;
		case POSTORDER:
			PostOrder(Root);
			break;
		case SEARCH:
			printf("정보 입력 : ");
			scanf("%d", &Select);
			Search(Root,Select);
			break;
		case DELETE:
			printf("정보 입력 : ");
			scanf("%d", &Select);
			if (Root != NULL)
				Delete(&Root, Select);
			else
				printf("데이터가 비어있습니다.");
			break;
		case EXIT:
			Release(Root);
			return;
		}
		system("pause");
	}
}