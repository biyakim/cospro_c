#include <stdio.h>
#include <stdlib.h>

int* Add(int x, int y) {
	int sum;
	sum = x + y;
	return &sum;
}
int main() {
	int x = 5, y = 7;
	int* pz;
	pz = Add(x, y);
	printf("%d\n", *pz);
	printf("%d\n", *pz); // 지역변수인 sum의 주소를 반환하면 그 값이 유지되지 않음 주의!!
	return 0;
}