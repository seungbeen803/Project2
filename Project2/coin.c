#include<stdio.h>
#include<Windows.h>
#include<time.h>

int coin_toss() {
	int i = rand() % 2;//0�Ǵ�1�� ���´�
	if (i == 0) return 0; //�޸�
	else return 1;//�ո�

}
void main() {
	srand((unsigned)time(NULL));
	int toss;
	int head = 0;
	int tail = 0;
	for (toss = 0; toss < 100; toss++) {
		//�Լ�
		if (coin_toss() == 1)
		head++;
		else tail++;
	}
	printf("������ �ո� %d", head);
	printf(" ������ �޸� %d\n", tail);
	system("pause");
}