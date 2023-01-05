#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int solution(int table[][5], int table_len) {
	int answer = 0;
	int max = 0;
	int sum = 0;

	for (int i = 1; i < table_len; ++i) {
		sum = 0;
		for (int k = 0; k < 5; k++) {
			if (table[0][k] == table[i][k]) {
				sum++;
			}
		}
		if (max < sum) {
			max = sum;
			answer = i;
		}
	}

	return answer;
}