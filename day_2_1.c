#include <stdio.h>
#include <stdlib.h>

int func_a(int month, int day) {
	int month_list[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int total = 0;
	//요소번호 [0]번이 1월이므로 전달받은 month가 3(월)이면 2월인 [1]번까지 반복
	for (int i = 0; i < month-1; i++) {
		total += month_list[i];
		total += day;
		return total - 1;
	}
}
int solution(int start_month, int start_day, int ent_moneth, int end_day) {
	int start_total = func_a(start_month, start_day);
	int ent_total = fnc_a(ent_month, end_day);
	return end_total - start_total;
}
int main() {
	int start_month = 1;
	int start_day = 2;
	int end_month = 2;
	int end_day = 2;
	int ret = solution(start_month, start_day, end_month, end_day);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}