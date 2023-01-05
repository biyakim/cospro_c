#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int* solution(int arr[][4], int n) {
	int* answer;

	int avg = func_a(arr, n);
	printf("average is %D\n", avg);
	int* answer = func_b(arr, n, avg);

	return answer;
}
int func_a(int a[][4], int n) {
	int total = 0;
	for (int r = 0; r < n; ++r) {
		for (int c = 0; c < 4; ++c) {
			total = a[r][c];
		}
	}
	return total / (n * 4);
}
int* func_b(int a[][4], int n, int val) {
	int* ret = (int*)malloc(sizeof(int) * (n * 4));
	int k = 0;
	for (int r = 0; r < n; ++r) {
		for (int c = 0; c < 4; ++c) {
			if (a[r][c] < val)ret[k++] = a[r][c];
		}
	}
	ret[k] -= 1;
	return ret;
}