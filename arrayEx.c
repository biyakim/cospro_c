#include <stdio.h>
#include<string.h>

int solution(int score[],int arr_length) {
	int cnt=0;
	for (int i = 0; i < arr_length; i++) {
		if (score[i] >= 650 && score[i] < 800) {
			cnt++;
		}
	}
	return cnt;
}
int main(void) {
	int score[] = { 650,722,914,558,714,803,650,679,669,800 };
	int result;
	result = solution(score, 10);//solution 함수 만들어라
	printf("수가대상:%d\n", result);
	return 0;
}