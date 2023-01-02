#include <stdio.h>
/*문자열의 길이 알아내기
문자열의 길이는 널문자 전까지의 문자 개수이며 배열의 길이보다 작다
널문자는 정수 0또는 문자 '\0'로 작성한다*/

int main(void) {
	char s1[30] = {"coding test exercise" };
	int cnt = 0;
	//널표시 ==0, =="\0"
	while (s1[cnt] !='\0') {
		cnt++;
	}
	printf("문자열의 길이:%d", cnt);

	cnt = 0;
	for (int i = 0; i < 30; i++) {
		if (s1[i] == 0)break;
		cnt++;
	}
	printf("문자열의 길이:%d", cnt);
	return 0;
}