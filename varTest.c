#include <stdio.h>]

int main(void) {
	int a = 10;
	double b = 5.7;
	char ch = 'A';
	int c = a + b;
	char fruit[6] = "apple";
	printf("%d\n", a);
	printf("%lf\n", b);
	printf("%c\n", ch);
	printf("%d\n", c);//�ڵ�����ȯ

	int length;
	length = sizeof(fruit) / sizeof(fruit[0]);

	for (int i = 0; i < length; i++) {
		printf("%c", fruit[i]);
	}

	return 0;
}