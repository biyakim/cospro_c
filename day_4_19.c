#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int arr[], int arr_len, int k) {
	int answer = 0;
	for (int i = 0; i < arr_len; i++) {
		answer += (arr[i]/k);
		if (arr[i] % k)answer++;
	}
	return answer;
}