#include <stdio.h>
#include <stdlib.h>

int main() {
	int* pArr[5] = {10,20,30,40,50};
	pArr[0] = pArr[0];
	pArr[1] = pArr[1];
	pArr[2] = pArr[2];
	pArr[3] = pArr[3];
	pArr[4] = pArr[4];

	printf("[0]�� ���ڿ� ��� : % d \n", pArr[0]);
	printf("[1]�� ���ڿ� ��� : % d \n", pArr[1]);
	printf("[2]�� ���ڿ� ��� : % d \n", pArr[2]);
	printf("[3]�� ���ڿ� ��� : % d \n", pArr[3]);
	printf("[4]�� ���ڿ� ��� : % d \n", pArr[4]);

	char *pStr[4] = { "red","green","blue","gray" };
	printf("[0]�� ���ڿ� ��� : % s \n", pStr[0]);
	printf("[1]�� ���ڿ� ��� : % s \n", pStr[1]);
	printf("[2]�� ���ڿ� ��� : % s \n", pStr[2]);
	printf("[3]�� ���ڿ� ��� : % s \n", pStr[3]);

}