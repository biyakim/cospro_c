#include <stdio.h>

void main() {
	int number;
	int* pNumber = NULL;
	number = 5;
	printf("number�� �� : %d\n", number);
	
	pNumber = &number; //number ������ �ּҸ� ����Ų��
	
	*pNumber = *pNumber + 5; // &*pNumber�� number��� �� �Ͱ� ����
	printf("number�� �� : %d\n", number);
	printf("number�� �ּ� ��(%p)\n ", &number);
	printf("pNumber�� �ּ� �� : %p\n", pNumber);
	
}