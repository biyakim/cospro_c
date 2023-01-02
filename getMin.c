#include <stdio.h>

int main(void) {
	int arr[10] = { 2,5,78,43,-45,68,31,100,45,23 };
	int min = arr[0];
	int tocation = 0;
	for (int i = 0; i < 10; i++) {
		if (min > arr[i])
			min = arr[i];
			tocation = i;
	}
	printf("최대값:%d 인덱스:%d", min, tocation);
	return 0;
}