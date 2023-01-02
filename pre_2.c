/*
A ���б��� �౸������ ��ü�� �౸ȭ�� �ֹ��ϱ� ���� �л����� �Ź߻���� �����߽��ϴ� ������ �� �ִ� �౸ȭ �������
���� �������� "7", "7.5", "8", "8.5", "9", "9.5" �� 6������ �ֽ��ϴ�. �л����� ���ϴ� ����� ������ ����� ����ִ� 
�迭 shirtsize�� shirtsize�� ���̸� ��Ÿ���� shirtsize_len�� �Ű������� �־��� �� ������� �౸ȭ�� �� ���� �ʿ����� 
���� ���� ��������� ������� �迭�� ��� return �ϵ��� solution �Լ��� �ϼ��Ͻÿ�
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer=(int*)malloc(sizeof(int)*shirt_size_len);
	for (int i = 0; i < shirt_size_len; i++) {
		answer[i] = 0;
	}

	for (int i = 0; i < shirt_size_len; i++) {
		if (shirt_size[i] == "7") {
			answer[0]++;
		}
		else if (shirt_size[i] == "7.5") {
			answer[1]++;
		}
		else if (shirt_size[i] == "8") {
			answer[2]++;
		}
		else if (shirt_size[i] == "8.5") {
			answer[3]++;
		}
		else if (shirt_size[i] == "9") {
			answer[4]++;
		}
		else if(shirt_size[i]=="9.5") {
			answer[5]++;
		}
	}

	return answer;
}
int main() {
	char* shirt_size[] = { "7","9.5","8","9","7","9" };
	int shirt_size_len = 6;
	int* ret = solution(shirt_size, shirt_size_len);

	printf("solution �Լ��� ��ȯ ���� {");

	for (int i = 0; i < 6; i++) {
		if (i != 0)printf(",");
		printf("%d", ret[i]);
	}
	printf("} �Դϴ�.\n");
}