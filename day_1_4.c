#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char s1[100] = "대한민국 파이팅";
	char s2[100];
	char s3[100];

	printf("s1 문자열의 길이 : %d\n", strlen(s1));
	strcpy(s2, s1); //s1 배열의 값을 s2 배열로 복사한다
	printf("%s\n", s2);
	strcat(s2, s1);	//s1 배열의 값을 s2의 값에 덧붙인다
	printf("%s\n", s2);
	//문자열의 비교, 일지하면 0 다르면 1 또는 -1
	printf("%d\n", strcmp("school", "boy"));
	printf("%d\n", strcmp("boy", "school"));
	printf("%d\n", strcmp("boy", "boy"));
}