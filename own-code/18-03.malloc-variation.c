#include<stdio.h>
#include<stdlib.h>
/*
1. malloc : 함수 호출시 메모리 크기를 전달하면 그 크기만큼 동적할당 공간 생성
2. calloc : 함수 호출시 생성 개수와 메모리 크기를 전달하면 그 크기에 개수만큼을 만들어 준다
3. realloc : 할당 동적할당 메모리 크기를 재할당(= 크기를 바꾼다)
*/
void main() {
	int* m_ptr;
	int* c_ptr;

	m_ptr = (int*)malloc(sizeof(int) * 5);
	// int형 크기의 공간을 5개 만듦 (= 20byte)
	c_ptr = (int*)calloc(5, sizeof(int)); 
	// 5개의 공간을 int형 크기로 만듦(= 20byte)

	printf("m_ptr이 가리키는 공간의 크기 : %d\n", sizeof(*m_ptr));
	// m_ptr이 가리키는 공간은 동적할당의 시작주소의 공간
	// 전체 크기를 sizeof로 출력 할 수 없다

	for (size_t i = 0; i < 30; i++)
	{
		//*(m_ptr + i) = i + 1;
		//printf("%d\n", *(m_ptr + i));
		m_ptr[i] = i + 1;
		printf("%d\n", m_ptr[i]);
	}
	// heap 영역에 5개의 공간을 만들었지만 지금 for문에서 5개의 공간을 넘게 값을 넣는 중
	// heap 영역의 공간을 넘었기 때문에 heap 버퍼 오버플로우라는 취약점이 발생
	// 프로그램 실행이 되더라도 지정한 공간을 넘어선 값은 손실될 우려가 있으므로
	// 만든 공간 크기만큼만 사용하도록 한다

	for (int i = 0; i < 30; i++) {
		c_ptr[i] = i + 1;
		printf("%d\n", c_ptr[i]);
	}
	// calloc 도 malloc 이랑 같은 기능, 사용법만 조금 다름
	
	realloc(m_ptr, sizeof(int) * 10);
	// 20byte였던 m_ptr이 가리키던 공간이 int형 크기의 공간 10개로 재할당 (= 40byte)
	// 위에서 할당한 공간이 모자라다고 생각될때 realloc으로 재할당하면 된다

	free(m_ptr);
	free(c_ptr);
}