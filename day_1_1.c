#include <stdio.h>

void main() {
	int arr[3][4] = { 0 };
	printf("arr�� ũ�� : %d\n", sizeof(arr)); // ����Ʈ�� ����=12*4
	printf("arr[0]�� ũ�� : %d\n", sizeof(arr[0])); // 4*4
	printf("arr[1]�� ũ�� : %d\n", sizeof(arr[1]));
	printf("arr[2]�� ũ�� : %d\n", sizeof(arr[2]));
	printf("arr[2][3]�� ũ�� : %d\n", sizeof(arr[2][3]));

	char ch = '9';
	int number = ch - 48; // ch - '0'
	printf("%3d", number); // '9'�� 57�̰�, 57-48=9
	printf("%3d", ch); // 57
}