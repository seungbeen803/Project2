#include<stdio.h>
#include<Windows.h>
#include<time.h>
HWND hwnd; //�׷����� ���ؼ� �����ش�
HDC hdc;//�׷����� ���ؼ� �����ش�
void main(void) {
	int i, x, y, red, green, blue;
	hwnd = GetForegroundWindow();//�׷����� ���ؼ� �����ش�
	hdc = GetWindowDC(hwnd);//�׷����� ���ؼ� �����ش�
	srand((unsigned)time(NULL));
	for (i = 0; i < 1000; i++) {
		x = rand() % 300;
		y = rand() % 300;
		red = rand() % 256;
		green = rand() % 256;
		blue = rand() % 256;
		SetPixel(hdc, x, y, RGB(red, green, blue));
	}
	- getch();//�Է��� ���� �� �ֵ��� ����ϴ� ��
	system("pause");
}
