#include<stdio.h>

void main() {
	int num1 = 10, num2;
	char ch1, ch2 = 'B';
	double dl1 = 3.14, dl2;
	
	// 1. 포인터 생성> 포인터로 num1의 값을 num2에 대입
	// num1 = num2 (x)

	int* p_num = &num1;
	// num1의 주소를 p_num에 대입 => p_num은 num1
	num2 = *p_num;
	// p_num1이 가리키는 주소로 가서 주소값을 num2 할당

	printf("num1 : %d, num2 : %d\n*p_num : %d\n\n", num1, num2, *p_num);

	// 2. 포인터 생성> 포인터로 ch2의 값을 ch1에 대입
	char* p_ch = &ch2;
	ch1 = *p_ch;

	printf("ch1 : %c, ch2 : %c\n*p_ch : %c\n\n", ch1, ch2, *p_ch);

	// 3. 포인터 생성> 포인터로 dl1의 값을 dl2에 대입
	// dl2의 값 포인터로 변경

	double* p_d = &dl1;
	dl2 = *p_d;

	p_d = &dl2;
	*p_d = 6.78;

	printf("dl1 : %lf, dl2 : %lf\n*p_d : %lf\n\n", dl1, dl2, *p_d);

	// 4. 각 포인터 변수들이 저장한 주소를 출력

	printf("p_num = %p, p_ch = %p, p_d = %p\n", p_num, p_ch, p_d);
}