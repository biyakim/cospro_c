#include <stdio.h>

int main(void) {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int a,i;
	printf("�Է��Ͻÿ�:");
	scanf("%d", &a);
	for (i = 0; i < 10; i++) {
		if (arr[i] == a) {
			break;//i�� �ش� �ε����� ����� ä break;
		}
	}
	if (i < 10) {
		printf("%d��° ��", i);
	}
	else {
		printf("����");
	}
	return 0;
}