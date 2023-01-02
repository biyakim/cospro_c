#include<stdio.h>

int main(void) {
	char a[24] = { "Practice makes perfect." };
	char b[5][10] = { {'A'},{'A','B','C'},{'A','B','C','D','E'},{'A','B','C','D','E','F','G'},{'A','B','C','D','E','F','G','H','I'} };
	
	for (int i = 0; i < 24; i++) {
		printf("%c", a[i]);
	}
	printf("\n");
	for (int i = 23; i >=0; i--) {
		printf("%c", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <10; j++) {
			printf("%c", b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			printf(" ");
			if (i == j) {
				printf("%c", b[i][j]);
			}
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5 - i; j++) {
			printf(" ");
		}
		printf("%s", b[i]);
		printf("\n");
	}
	
	return 0;
}