#include <stdio.h>

void swap(int *pa, int *pb) {
	int a=*pa; //���޹��� �ּ�a�� ���� ����
	int b = *pb; //���޹��� �ּ�b�� ���� ����
	*pa = b;
	*pb = a;
}

int main(void) {
	int a = 5, b = 8;
	swap(&a, &b);
	printf("�Լ�ȣ�� �� \n");
	printf("a: %d b:%d\n", a, b);
	return 0;
}