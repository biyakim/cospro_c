#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Swap(int* pa, int* pb) {
	int a = *pa; // <- ���޹��� �ּ�(a)�� ���� �����Ѵ�
	int b = *pb; // <- ���޹��� �ּ�(b)�� ���� �����Ѵ�
	*pa = b;
	*pb = a;
}
int main() {
	int a = 5, b = 8;
	Swap(&a, &b); // <- ����� ������ �ּ�(&)�� �����Ѵ�
	printf("�Լ��� ȣ�� ��\n");
	printf("a = %d b = %d\n", a, b);
	return 0;
}
