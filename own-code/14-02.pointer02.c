#include<stdio.h>

void main() {
	char ch1 = 'A', ch2;
	char* ptr;
	// 자료형 char(1byte)
	//포인터 변수로 생성되었기 때문에 4byte(x64:8byte)

	ptr = &ch1; 
	// ch1의 주소를 저장
	ch2 = *ptr;	
	// ptr이 가리키는 주소(&ch1)접근
	//ch = 'A' 가져와서 ch2에 대입

	printf("변수 ch1의 주소> %p\n", &ch1);
	printf("변수 ptr(주소)의 내용> %p\n\n", ptr);

	printf("변수 ch1의 값> %c\n", ch1);
	printf("변수 *ptr의 값> %c\n", *ptr);
	printf("변수 ch2의 값> %c\n\n", ch2);

	printf("변수 ch1의 크기> %d\n", sizeof(ch1));
	//1byte
	printf("변수 ptr의 크기> %d\n", sizeof(ptr));
	//4byte(x64:8byte)
	printf("변수 *ptr의 크기> %d\n\n", sizeof(*ptr));
	// *ptr은 가리카는 주소의 공간(ch1) => 1byte

	//cf
	double dl = 3.14;
	double* p_dl;

	printf("double dl의 크기> %d\n", sizeof(dl));
	//8byte
	printf("double* p_dl의 크기> %d\n", sizeof(p_dl));
	//4byte
}