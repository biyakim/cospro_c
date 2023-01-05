#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int solution(int arr[], int arr_len, int payload) {
	int cnt = 0;
	int weight = 0;
	int diff = 0;
	for (int i = arr_len-1; i >= 0; --i) {
		diff = payload - weight;
		if (diff >= arr[i]) {
			weight += arr[i];
			cnt++;
		}
	}
	if (weight != payload)
		cnt++;
	return cnt;
}