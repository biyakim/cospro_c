#include <stdio.h>

int main(void) {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int a,i;
	printf("입력하시오:");
	scanf("%d", &a);
	for (i = 0; i < 10; i++) {
		if (arr[i] == a) {
			break;//i에 해당 인덱스가 저장된 채 break;
		}
	}
	if (i < 10) {
		printf("%d번째 방", i);
	}
	else {
		printf("없다");
	}
	return 0;
}