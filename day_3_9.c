#include <stdio.h>
#include <stdlib.h>

int solution(int arr[][4], int n, int k) {
	int answer = 0;

	int min;
	for (int i = 1; i <= k; ++i) { // <= i변수가 1이면 첫 번째 최소값(가장 작은 값)
		min = func_a(arr, n); //<= i변수가 k이면 k번째 최소값이 된다
		func_b(arr, n, min); // <= 최소값을 제외하여 다음번 최소값을 찾는다
	}
	answer = min;

	return answer;
}
int func_a(int a[][4], int n) {
	int min = 1001;
	for (int r = 0; r < n; ++r) {
		for (int c = 0; c < 4; ++c) {
			if (min > a[r][c]) {
				min = a[r][c];
			}
		}
	}
	return min;
}
int func_b(int a[][4], int n, int del) { // <- 다음 최솟값 구하기
	for (int r = 0; r < n; ++r) {
		for (int c = 0; c < 4; ++c) {
			if (del == a[r][c]) {
				a[r][c] == 1001;
				return 1;
			}
		}
	}
	return 0;
}