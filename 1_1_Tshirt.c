#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* solution(char*shirt_size[], int shirt_size_len) {
	int* answer;
	answer = (int*)malloc(sizeof(int) * shirt_size_len);
	//초기화
	for (int i = 0; i < shirt_size_len; i++) {
		answer[i] = 0;
	}
	//로직 XS S M L XL XXL
	for (int i = 0; i < shirt_size_len; i++) {
		if (strcmp(shirt_size[i],"XS")==0) {
			answer[0]++; 
		}
		else if (strcmp(shirt_size[i] ,"S")==0) {
			answer[1]++;
		}
		else if (strcmp(shirt_size[i],"L")==0) {
			answer[3]++;
		}
		else if (strcmp(shirt_size[i] ,"XL")==0) {
			answer[4]++;
		}
		else if (strcmp(shirt_size[i],"XXL")==0) {
			answer[5]++;
		}
	}
	return answer;
}

int main(void) {
	char* shirt_size[6] = { "XS","XS","XXL","S","M","L" };
	int* result;
	result = solution(shirt_size, 6);
	for (int i = 0; i < 6; i++) {
		printf("%d ", result[i]);
	}
	return 0;
}