#include <stdio.h>
#include<string.h>

void solution(char s1[][10], int arr_length) {
	for (int i = 0; i < arr_length; i++) {
		if (strcmp(s1[i], "독일") == 0) {
			printf("%d\t", i + 1);
		}
	}
}

int main(void) {
	char s1[7][10] = { "한국","미국","일본","영국","독일","호주","독일" };
	int arr_len = sizeof(s1[0]) / sizeof(char);
	solution(s1, 7);
	return 0;
}