#include <stdio.h>
#include <stdlib.h>

int solution(int arr[][4], int n, int k) {
	int answer = 0;

	int min;
	for (int i = 1; i <= k; ++i) { // <= i������ 1�̸� ù ��° �ּҰ�(���� ���� ��)
		min = func_a(arr, n); //<= i������ k�̸� k��° �ּҰ��� �ȴ�
		func_b(arr, n, min); // <= �ּҰ��� �����Ͽ� ������ �ּҰ��� ã�´�
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
int func_b(int a[][4], int n, int del) { // <- ���� �ּڰ� ���ϱ�
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