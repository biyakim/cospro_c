#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int walls) {
	int answer = 0;
	int painted_walls = 0;
	int i;
	for (i = 1; painted_walls < walls; i++) {
		painted_walls = (i)+(i/2) + (i/4);
	}
	answer = i-1;
	return answer;
}