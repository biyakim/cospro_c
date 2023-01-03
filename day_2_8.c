#include <stdio.h>
#include <stdlib.h>

char* solution(char* characters) {
	char* result = malloc(sizeof(char) * strlen(characters));
	int result_len = 0;
	result[0] = characters[0];
	result_len++;
	for (int i = 1; i < strlen(characters); i++) {
		if (characters[i - 1] != characters[i]) {
			reuslt[result_len] = characters[i];
			result_len++
		}
	}
	reuslt[result_len] = NULL;
	return result;
}