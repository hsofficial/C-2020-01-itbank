#include<stdio.h>
#include<stdlib.h>
#define EMPTY 0 //EMPTY를 0으로 지정


typedef struct node {			//데이터 저장할 변수와 자기참조구조체 구성
	int data;
	struct node* link;//struct node포인터형태의 link선언 
}Stack;

Stack* get_node() {			//공간할당과 할당된 주소 반환
	Stack* tmp = (Stack*)malloc(sizeof(Stack));
	//heap영역에 Stack구조체 크기의 주소를 할당
	//그 주소를 tmp에 들고옴
	tmp->link = EMPTY;
	//link는 EMPTY로 초기화
	return tmp;
}

void push(Stack** top, int data) {	//데이터 입력
	Stack* tmp = *top;
	//main 의 top의 안에 있는 값을 저장할 tmp변수 구성
	*top = get_node();
	//get_node함수 호출과 반환받은 주소 main의 top안에 저장
	(*top)->data = data;
	(*top)->link = tmp;
	//main의 top에 데이터 대입, link에는 원래 main의 top이 들고있던 주소 대입

}

int pop(Stack** top)
{
	if ((*top) == EMPTY)
	{
		printf("Underflow > ");
		return -1;
	}

	Stack* tmp = (*top); //3000번지를 tmp에게 저장
	*top = (*top)->link; //main의 top이 2000번지를 가르키도록 합니다.
	int data = tmp->data; //3000번지의 데이터를 data에 저장
	free(tmp);//3000번지 x
	return data;

}

void print_all(Stack** top)
{
	//반복문 이용해서 현재 스택의 다음 노드를 읽어가며 프린트하도록 구성한다
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
	printf("pop : %d\n", pop(&top));	//underflow발생 
}