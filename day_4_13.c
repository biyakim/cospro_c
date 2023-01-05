#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int student[], int apts) {
	int result = 0;
	int total = 0;
	for (int i = 0; i < apts; i++) {
		total += student[i];
	}
	result = (total / 12); // 12명씩 몇 번 실어서 나르고
	if (total % 12) // 12명 미만의 남는 학생들을 한 번 더 실어 나른다.
		result++;

	return result;
}