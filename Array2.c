#include <stdio.h>
int arr1[10];//��������=>�Լ����� �����ϴ� ����=>�ʱ�ȭX
int main(void) {
	//int num = 10;
	//int arr[num];

	int arr2[10];//main������ �����ϴ� �������� => �ʱ�ȭ

	for (int i = 0; i < 10; i++) {
		printf("arr[%d]=%d\n", i, arr2[i]);
	}
	for (int i = 0; i < 10; i++) {
		printf("arr[%d]=%d\n", i, arr1[i]);
	}
	return 0;
}