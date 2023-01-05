#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution(int price, char* grade) {
	int answer = 0;

	if (strcmp(grade, "S") == 0) {
		answer = price * 1.05;
	}
	if (strcmp(grade, "G") == 0) {
		answer = price * 1.10;
	}
	if (strcmp(grade, "V") == 0) {
		answer = price * 1.15;
	}

	return answer;
}