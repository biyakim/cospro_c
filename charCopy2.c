#include <stdio.h>
//문자열의 길이를 구하지 않고 복사 =>마지막 요소에 널을 삽입
//char s1[20]={"coding test"};
//char s2[20];
int main(void) {
	char s1[20] = { "coding test" };
	char s2[20];

	for (int i = 0; s1[i] != 0; i++) {
		s2[i] = s1[i];
		if (s2[i] == 0)break;
		printf("%c", s2[i]);
	}
	
	return 0;
}