#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution(int price, char* grade) {
	int answer = 0;

	if (strcmp(grade, "S") == 0) {
		answer = price * 0.95;
	}
	if (strcmp(grade, "G") == 0) {
		answer = price * 0.9;
	}
	if (strcmp(grade, "V") == 0) {
		answer = price * 0.85;
	}

	return answer;
}