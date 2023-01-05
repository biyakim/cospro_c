#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solutioni(const char* strings[], int str_len) {
	int result = 0;
	int len;
	for (int i = 0; i < str_len; i++) {
		len = strlen(strings[i]);
		result += (len / 4);
		if (len % 4 != 0)
			result++;
	}
	return result;
}