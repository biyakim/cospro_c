#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char word[6][20] = { "�ѱ�","�̱�","�Ϻ�","����","����","ȣ��"};

	char key[20] = { 0 };
	int cnt;
	strcpy(key, "����");
	cnt = 0;
	for (int i = 0; i < 6; ++i) {
		if (strcmp(word[i], key) == 0) {
			printf("%d ��°�� ����\n", i);
			
		}
	}
	if (cnt == 0) printf("ã�� �� ����\n");
}