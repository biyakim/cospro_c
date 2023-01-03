#include <stdio.h>
#include <stdlib.h>

int* solution(int arr[], int arr_len) {
	int left = 0;
	int rigth = arr_len - 1;
	while (left < right) {
		int temp = arr[left];
		arr[left] = arr[rigth];
		arr[rigth] = temp;
		left + 1;
		rigth -= 1;
	}
	return arr;
}