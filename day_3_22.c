#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int func_a(int k) {
	int sum = 0;
	for (int i = 0; i <= k; ++i)
		sum += i;
	return sum;
}
int solution(int n, int m) {
	int sum_to_m = func_a(m);
	int sum_to_n = func_a(n-1);
	int answer = sum_to_m - sum_to_n;
	return answer;
}
