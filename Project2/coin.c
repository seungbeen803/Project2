#include<stdio.h>
#include<Windows.h>
#include<time.h>

int coin_toss() {
	int i = rand() % 2;//0또는1이 나온다
	if (i == 0) return 0; //뒷면
	else return 1;//앞면

}
void main() {
	srand((unsigned)time(NULL));
	int toss;
	int head = 0;
	int tail = 0;
	for (toss = 0; toss < 100; toss++) {
		//함수
		if (coin_toss() == 1)
		head++;
		else tail++;
	}
	printf("동전의 앞면 %d", head);
	printf(" 동전의 뒷면 %d\n", tail);
	system("pause");
}