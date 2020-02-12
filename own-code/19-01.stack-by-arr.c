#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int arr[4];//최대 길이만큼 공간할당
	int top;// stack의 가장 마지막 데이터 위치
}Stack;//별칭

//구조체 포인터변수로 매개변수를 선언하는 이유
//main이 아닌 함수에서 main의 값을 변경하기 위해
void init(Stack* p_stack)	// init은 초기화 하는 함수
{
	p_stack->top = -1;//데이터를 넣을 위치를 -1로 초기화
}

//p_stack : 포인터변수 4byte짜리 주소저장하는 변수
void push(Stack* p_stack, int data) {	//삽입
	//만약 stack의 인덱스가 최대이면 overflow 발생
	//top을 이용하여 값을 대입
	if (p_stack->top >= 3)	//3 = arr max - 1
	{
		printf("Stack is full.\n");
		return;
	}

	p_stack->arr[++(p_stack->top)] = data;
}

int pop(Stack* p_stack) {	//삭제
	//top이 -1(초기값)까지 내려오면 반환할 데이터가 없다는 의미
	if (p_stack->top == -1)
	{
		printf("Stack is empty.\n");
		return;
	}
	//현재 top이 가르키는 인덱스번호의 데이터를 반환하고 top을 한칸 감소
	return p_stack->arr[(p_stack->top)--];
}

int peek(Stack* p_stack) {	//top 데이터 확인
	//값이 없으면 -1 반환
	if (p_stack->top == -1)
	{
		printf("Stack is empty = Data is empty.\n");
		return;
	}
	//현재 top이 가르키는 값을 반환
	return p_stack->arr[p_stack->top];
}

void main() {
	Stack stack;	//Stack구조체 생성

	init(&stack);	//stack의 주소를 인자로 넘겨줌
	push(&stack, 5);//stack의 주소와 저장할 데이터를 넘겨줌
	push(&stack, 2);
	push(&stack, 7);
	push(&stack, 8);
	push(&stack, 10); //stack overflow발생 (배열이 꽉참)

	printf("peek : %d\n", peek(&stack));

	int n;
	n = pop(&stack); //pop함수 호출(데이터반환)
	printf("pop : %d\n", n);
	n = pop(&stack); //pop함수 호출(데이터반환)
	printf("pop : %d\n", n);
	n = pop(&stack); //pop함수 호출(데이터반환)
	printf("pop : %d\n", n);
	n = pop(&stack); //pop함수 호출(데이터반환)
	printf("pop : %d\n", n);
	n = pop(&stack); //underflow발생 (배열에 데이터가 없음)
	printf("pop : %d\n", n);
}