#include<stdio.h>
#include<stdlib.h>
#define EMPTY 0 //EMPTY�� 0���� ����


typedef struct node {			//������ ������ ������ �ڱ���������ü ����
	int data;
	struct node* link;//struct node������������ link���� 
}Stack;

Stack* get_node() {			//�����Ҵ�� �Ҵ�� �ּ� ��ȯ
	Stack* tmp = (Stack*)malloc(sizeof(Stack));
	//heap������ Stack����ü ũ���� �ּҸ� �Ҵ�
	//�� �ּҸ� tmp�� ����
	tmp->link = EMPTY;
	//link�� EMPTY�� �ʱ�ȭ
	return tmp;
}

void push(Stack** top, int data) {	//������ �Է�
	Stack* tmp = *top;
	//main �� top�� �ȿ� �ִ� ���� ������ tmp���� ����
	*top = get_node();
	//get_node�Լ� ȣ��� ��ȯ���� �ּ� main�� top�ȿ� ����
	(*top)->data = data;
	(*top)->link = tmp;
	//main�� top�� ������ ����, link���� ���� main�� top�� ����ִ� �ּ� ����

}

int pop(Stack** top)
{
	if ((*top) == EMPTY)
	{
		printf("Underflow > ");
		return -1;
	}

	Stack* tmp = (*top); //3000������ tmp���� ����
	*top = (*top)->link; //main�� top�� 2000������ ����Ű���� �մϴ�.
	int data = tmp->data; //3000������ �����͸� data�� ����
	free(tmp);//3000���� x
	return data;

}

void print_all(Stack** top)
{
	//�ݺ��� �̿��ؼ� ���� ������ ���� ��带 �о�� ����Ʈ�ϵ��� �����Ѵ�
	int num;
	Stack* tmp;
	tmp = *top;
	while (tmp != EMPTY) {
		printf("data : %d \n", tmp->data);
		tmp = tmp->link;
	}
}

void main() {
	Stack* top = EMPTY;
	push(&top, 10);
	print_all(&top);
	printf("======================================\n");
	push(&top, 20);
	print_all(&top);
	printf("======================================\n");
	push(&top, 30);
	print_all(&top);
	printf("======================================\n");

	printf("pop : %d\n", pop(&top));
	printf("pop : %d\n", pop(&top));
	printf("pop : %d\n", pop(&top));
	printf("pop : %d\n", pop(&top));	//underflow�߻� 
}