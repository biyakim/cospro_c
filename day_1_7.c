#include <stdio.h>

void main() {
	char* pChar;
	int* pInt;
	double* pDouble;
	printf("%d\n", sizeof(pChar)); // ������ ������ 4����Ʈ
	printf("%d\n", sizeof(pInt)); // ������ ������ 4����Ʈ
	printf("%d\n", sizeof(pDouble)); // ������ ������ 4����Ʈ
	printf("\n");
	printf("%d\n", sizeof(*pChar)); // *�� �� �ȿ� �� �ּҸ� ����Ű�µ� �� �ȿ��� char�� ������ 1
	printf("%d\n", sizeof(*pInt)); // *�� �� �ȿ� �� �ּҸ� ����Ű�µ� �� �ȿ��� int�� ������ 4
	printf("%d\n", sizeof(*pDouble)); // *�� �� �ȿ� �� �ּҸ� ����Ű�µ� �� �ȿ��� double�� ������ 8

	/*
	int* pArr = arr;	//arr�� �迭���̴�
	//pArr�� arr[0]�� �ּ��̴�. // �迭����[0]�� ����� �ּ��̴�
	*pArr == arr[0];	//*(�ּ�)�� �ּ��� �̸��� ����
	*pArr == *(pArr + 0) == arr[0];
	*(pArr + i) == arr[i]
	*/
}