#include <stdio.h>
/*���ڿ��� ���� �˾Ƴ���
���ڿ��� ���̴� �ι��� �������� ���� �����̸� �迭�� ���̺��� �۴�
�ι��ڴ� ���� 0�Ǵ� ���� '\0'�� �ۼ��Ѵ�*/

int main(void) {
	char s1[30] = {"coding test exercise" };
	int cnt = 0;
	//��ǥ�� ==0, =="\0"
	while (s1[cnt] !='\0') {
		cnt++;
	}
	printf("���ڿ��� ����:%d", cnt);

	cnt = 0;
	for (int i = 0; i < 30; i++) {
		if (s1[i] == 0)break;
		cnt++;
	}
	printf("���ڿ��� ����:%d", cnt);
	return 0;
}