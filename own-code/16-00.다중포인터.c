#include<stdio.h>

void swap(int** pp_n1, int** pp_n2) {	// 2. 그래서 *이 두개
	int tmp; // 정수형 변수
	tmp = **pp_n1; // 정수형 변수에 이중포인터연산자를 이용해서 값을 저장
				   // 이중포인터로 접근하면 => n1의 값 => 따라서 정수값 10
				// pp_n1 -> p_n1 -> n1 (= pp_n1이 n1으로 도달하려면 두번을 거쳐야함)
	**pp_n1 = **pp_n2;
	**pp_n2 = tmp;
}

void main() {
	int n1 = 10, n2 = 20;
	int* p_n1, p_n2;
	
	p_n1 = &n1;	// n1의 주소를 저장
	p_n2 = &n2;	// n2의 주소를 저장

	printf("swap 전 n1 : %d, n2 : %d\n", n1, n2);
	swap(&p_n1, &p_n2);
	// 포인터변수(주소를 저장하는 변수)의 주소를 전달
	// => 주소의 주소를 전달 ( 1. 주소라는 단어가 두번 들어감 )
	printf("swap 후 n1 : %d, n2 : %d\n", n1, n2);
}