#include <stdio.h>
//문자열의 길이를 구해서 길이만큼 복사
//char s1[20]={"coding test"};
//char s2[20];
int main(void) {
	char s1[20] = { "coding test" };
	char s2[20];
	int cnt = 0;
	for (int i = 0; i < 20; i++) {
		if (s1[i] == 0)break;
		cnt++;
	}

	for (int i = 0; i <= cnt; i++) {
		s2[i] = s1[i];
		
	}
	printf("%s", s2);
	return 0;
}