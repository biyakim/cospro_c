#include <stdio.h>
#include <stdlib.h>

int solution(int arr[], int arr_len) {
	int* counter = func_a(arr,arr_len);
	int max_cnt = func_b(counter,arr_len);
	int min_cnt = func_c(counter,arr_len);
	return max_cnt / min_cnt;
}
int* func_a(int arr[], int arr_len) {
	int* counter = (int*)malloc(sizeof(int) * 1001);

	for (int i = 0; i < 1001; i++)
		counter[i] = 0;
	for (int i = 0; i < arr_len; i++)
		counter[arr[i]]++;
	return counter;
}
int func_b(int arr[], int arr_len) {
	int ret = 0;
	for (int i = 0; i < arr_len; i++) {
		if (ret < arr[i])
			ret = arr[i];
	}
	return ret;
}
itn func_c(int arr[], int arr_len) {
	const int INF = 1001;
	int ret = INF;
	for (int i = 0; i < arr_len; i++) {
		if (arr[i] != 0 && ret > arr[i])
			ret = arr[i];
	}
	retrun ret;
}