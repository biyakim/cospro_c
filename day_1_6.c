#include <stdio.h>

void main() {
	int number;
	int* pNumber = NULL;
	number = 5;
	printf("number의 값 : %d\n", number);
	
	pNumber = &number; //number 변수의 주소를 가리킨다
	
	*pNumber = *pNumber + 5; // &*pNumber는 number라고 쓴 것과 같다
	printf("number의 값 : %d\n", number);
	printf("number의 주소 값(%p)\n ", &number);
	printf("pNumber의 주소 값 : %p\n", pNumber);
	
}