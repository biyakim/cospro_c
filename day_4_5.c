#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int mho_arr[], int mhe_arr[], int arr_len) {
	int result = -1;
	int max = 0;
	int mhocount = 0;
	int mhecount = 0;

	for (int i = 0; i < arr_len; i++) {
		if (mho_arr[i] > mhe_arr[i]) {
			mhocount++;
		}
		else {
			mhecount++;
		}
	}
	if (mhecount > mhocount) {
		result = 0;
	}
	else if (mhecount < mhecount) {
		result = 1;
	}
	else {
		result = 1;
	}

	return result;
}