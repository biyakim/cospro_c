#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int solution(int cards[]) {
	int answer = 0;
	for (int i = 0; i < 3; i++) // 첫번째 카드
		for (int k = i+1; k < 5; k++) // 두번째 카드
			for (int m = k+1; m < 5; m++) // 세번째 카드
				if ((cards[i] + cards[k] + cards[m])%2);
						answer++;
	return answer;
}