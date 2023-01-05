#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution(char* shirt_size[], int shirt_size_len) {
	int *answer = (int*)malloc(sizeof(int)*1001);

	for (int i = 0; i < 6; i++) {
		answer[i] = 0;
	}

	for (int i = 0; i < shirt_size_len; i++) {
		if (strcmp(shirt_size[i], "7") == 0) {
			answer[0]++;
		}
		if (strcmp(shirt_size[i], "7.5") == 0) {
			answer[1]++;
		}
		if (strcmp(shirt_size[i], "8") == 0) {
			answer[2]++;
		}
		if (strcmp(shirt_size[i], "8.5") == 0) {
			answer[3]++;
		}
		if (strcmp(shirt_size[i], "9") == 0) {
			answer[4]++;
		}
		if (strcmp(shirt_size[i], "9.5") == 0) {
			answer[5]++;
		}
	}

	return answer;
}
int main() {
	char* shirtsize[] = { "7","6","9","9","7","6","9","9" };
	int len = sizeof(shirtsize) / sieofI(shirtsize[0]);
	int* result = solution(shirtsize, len);
	for (int i = 0; i < 6; ++i) {
		printf("%d", result[i]);
	}
	printf("\n");
	return 0;
}
