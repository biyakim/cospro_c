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
	result = (total / 12); // 12�� �� �� �Ǿ ������
	if (total % 12) // 12�� �̸��� ���� �л����� �� �� �� �Ǿ� ������.
		result++;

	return result;
}