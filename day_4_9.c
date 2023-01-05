#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int* solution(int scores[][4], int scores_len) {
	int* result = (int*)malloc(sizeof(int) * scores_len);
	for (int i = 0; i < 4; i++) {
		result[i] = 0;
		for (int k = 0; k < 4; k++) {
			if (i != k) {// 대각선 제외 
				result[i] += (scores[i][k]*2);
			}
		}
	}
	return result;
}