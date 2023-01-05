#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int* solution(int a[][3], int b[][3], int len) {
	int* answer = (int*)malloc(sizeof(int)*1001);
	int total = 0;
	int atotal = 0 ;
	int btotal = 0;

	for (int i = 0; i < len; i++) {
		answer[i] = 0;
	}

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			total = a[i][j] + b[i][j];
			atotal += a[i][j];
			btotal += b[i][j];
		}
	}
	answer[0] = (int)((double)atotal / total * 100);
	answer[1] = (int)((double)btotal / total * 100);

			
	return answer;
}