#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int arr[4];//�ִ� ���̸�ŭ �����Ҵ�
	int top;// stack�� ���� ������ ������ ��ġ
}Stack;//��Ī

//����ü �����ͺ����� �Ű������� �����ϴ� ����
//main�� �ƴ� �Լ����� main�� ���� �����ϱ� ����
void init(Stack* p_stack)	// init�� �ʱ�ȭ �ϴ� �Լ�
{
	p_stack->top = -1;//�����͸� ���� ��ġ�� -1�� �ʱ�ȭ
}

//p_stack : �����ͺ��� 4byte¥�� �ּ������ϴ� ����
void push(Stack* p_stack, int data) {	//����
	//���� stack�� �ε����� �ִ��̸� overflow �߻�
	//top�� �̿��Ͽ� ���� ����
	if (p_stack->top >= 3)	//3 = arr max - 1
	{
		printf("Stack is full.\n");
		return;
	}

	p_stack->arr[++(p_stack->top)] = data;
}

int pop(Stack* p_stack) {	//����
	//top�� -1(�ʱⰪ)���� �������� ��ȯ�� �����Ͱ� ���ٴ� �ǹ�
	if (p_stack->top == -1)
	{
		printf("Stack is empty.\n");
		return;
	}
	//���� top�� ����Ű�� �ε�����ȣ�� �����͸� ��ȯ�ϰ� top�� ��ĭ ����
	return p_stack->arr[(p_stack->top)--];
}

int peek(Stack* p_stack) {	//top ������ Ȯ��
	//���� ������ -1 ��ȯ
	if (p_stack->top == -1)
	{
		printf("Stack is empty = Data is empty.\n");
		return;
	}
	//���� top�� ����Ű�� ���� ��ȯ
	return p_stack->arr[p_stack->top];
}

void main() {
	Stack stack;	//Stack����ü ����

	init(&stack);	//stack�� �ּҸ� ���ڷ� �Ѱ���
	push(&stack, 5);//stack�� �ּҿ� ������ �����͸� �Ѱ���
	push(&stack, 2);
	push(&stack, 7);
	push(&stack, 8);
	push(&stack, 10); //stack overflow�߻� (�迭�� ����)

	printf("peek : %d\n", peek(&stack));

	int n;
	n = pop(&stack); //pop�Լ� ȣ��(�����͹�ȯ)
	printf("pop : %d\n", n);
	n = pop(&stack); //pop�Լ� ȣ��(�����͹�ȯ)
	printf("pop : %d\n", n);
	n = pop(&stack); //pop�Լ� ȣ��(�����͹�ȯ)
	printf("pop : %d\n", n);
	n = pop(&stack); //pop�Լ� ȣ��(�����͹�ȯ)
	printf("pop : %d\n", n);
	n = pop(&stack); //underflow�߻� (�迭�� �����Ͱ� ����)
	printf("pop : %d\n", n);
}