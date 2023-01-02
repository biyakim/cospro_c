#include <stdio.h>

void main() {
	char* pChar;
	int* pInt;
	double* pDouble;
	printf("%d\n", sizeof(pChar)); // 포인터 변수는 4바이트
	printf("%d\n", sizeof(pInt)); // 포인터 변수는 4바이트
	printf("%d\n", sizeof(pDouble)); // 포인터 변수는 4바이트
	printf("\n");
	printf("%d\n", sizeof(*pChar)); // *는 그 안에 값 주소를 가리키는데 그 안에는 char가 있으니 1
	printf("%d\n", sizeof(*pInt)); // *는 그 안에 값 주소를 가리키는데 그 안에는 int가 있으니 4
	printf("%d\n", sizeof(*pDouble)); // *는 그 안에 값 주소를 가리키는데 그 안에는 double가 있으니 8

	/*
	int* pArr = arr;	//arr는 배열명이다
	//pArr은 arr[0]의 주소이다. // 배열명은[0]번 요소의 주소이다
	*pArr == arr[0];	//*(주소)는 주소의 이름과 같다
	*pArr == *(pArr + 0) == arr[0];
	*(pArr + i) == arr[i]
	*/
}