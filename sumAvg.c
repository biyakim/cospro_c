/*1.�迭(����10)�� ������ ����(rand()�Լ� ���)�� �����ϰ� 
  �� �հ� ����� ���ϴ� �ڵ带 �ۼ��غ���,
  2.�� �� ������ ������ 1~100�� ������ �����Ѵ�
  3.����/�հ�/����� ���ϴ� ������ �и��Ͽ� �ڵ��ϴ� ������ �⸣��
  */
#include <stdio.h>
int main(void) {
	int score[10]={0};
	int sum = 0;
	double avg;
	//����
	for (int i = 0; i < 10; i++) {
		score[i]=rand() % 100 + 1;
	}
	//�հ�
	for (int i = 0; i < 10; i++) {
		sum += score[i];
	}
	//���
	avg = (double)sum / 10;
	printf("�հ�:%d\n", sum);
	printf("��:%lf\n", avg);
	return 0;
}