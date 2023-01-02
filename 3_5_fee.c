#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//0.9 0.8
//교통수단에 따라 요금 결정
//전체 인원이 10명이 넘는지 여부 결정
//연령에 딸느 요금 재 확장
int solution(int member_age[], int member_age_len, char* transportation) {
	int adult_expense = 0;
	int child_expense = 0;
	int total_expense = 0;
	if (transportation == "Bus") {
		adult_expense = 40000;
		child_expense = 15000;
	}
	else if (transportation == "Ship") {
		adult_expense = 30000;
		child_expense = 13000;
	}
	else if (transportation == "Airplane") {
		adult_expense = 70000;
		child_expense = 45000;
	}
	if (member_age_len >= 10) {
		adult_expense*=0.9;
		child_expense*=0.8;
	}
	for (int i = 0; i < member_age_len; i++) {
		if (member_age[i] >= 20) {
			total_expense += adult_expense;
		}
		else if (member_age[i] < 20) {
			total_expense += child_expense;
		}
	}
	return total_expense;
}
int main() {
	int member_age1[5] = { 13,33,45,11,20 };
	int member_age1_len = 5;
	char* transportations1 = "Bus";
	int ret1 = solution(member_age1, member_age1_len, transportations1);
	printf("solution함수의 반환 값은 %d 입니다.\n", ret1);

	int member_age2[10] = { 25,11,27,56,7,19,52,31,77,8 };
	int member_age2_len = 10;
	char* transportations2 = "Ship";
	int ret2 = solution(member_age2, member_age2_len, transportations2);
	printf("solution 함수의 반환 값은 %d입니다.\n", ret2);
}