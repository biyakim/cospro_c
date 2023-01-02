#include <stdio.h>
#include <string.h>

int main(void) {
	/*int number = 100;
	printf("number 주소: %p 값: %d\n", &number, number);

	int n = 5;
	int* ptr = &n; //5
	*ptr = 10;
	printf("n의 값 : %d", n);*/

	int number;
	int* pNumber = NULL;
	number = 5;
	printf("number의 값 : %d\n", number);

	pNumber = &number;
	*pNumber = *pNumber + 5;
	printf("number의 값 : %d\n", number);

	char* pChar;
	int* pInt;
	double* pDouble;
	printf("%d\n", sizeof(pChar));
	printf("%d\n", sizeof(pInt));
	printf("%d\n", sizeof(pDouble));

	printf("%d\n", sizeof(*pChar));
	printf("%d\n", sizeof(*pInt));
	printf("%d\n", sizeof(*pDouble));

	return 0;
}