#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

double solution(int a, int b) {
	double answer = 0;
	int diff = (a<b)?b-a:a-b;
	
	answer = 10.0 / diff;
	return answer * 60;
}