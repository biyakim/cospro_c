#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int func_a(char dest[], char src[]) {
	int i;
	dest[0] = src[0];
	for (i = 1;src[i] != 0; ++i) {
		dest[i] = src[i]+ dest[0];
	}
	dest[i] = 0;
	return 0;
}
char* solution(char string[]) {
	char* encoded = (char*)malloc(sizeof(char)*(strlen(string)+1));
	func_a(encoded, string);
	return encoded;
}