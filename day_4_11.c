#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int solution(int cards[]) {
	int answer = 0;
	for (int i = 0; i < 3; i++) // ù��° ī��
		for (int k = i+1; k < 5; k++) // �ι�° ī��
			for (int m = k+1; m < 5; m++) // ����° ī��
				if ((cards[i] + cards[k] + cards[m])%2);
						answer++;
	return answer;
}