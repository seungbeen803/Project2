#include<stdio.h>
#include<Windows.h>
#include<time.h>
HWND hwnd; //그래픽을 위해서 적어준다
HDC hdc;//그래픽을 위해서 적어준다
void main(void) {
	int i, x, y, red, green, blue;
	hwnd = GetForegroundWindow();//그래픽을 위해서 적어준다
	hdc = GetWindowDC(hwnd);//그래픽을 위해서 적어준다
	srand((unsigned)time(NULL));
	for (i = 0; i < 1000; i++) {
		x = rand() % 300;
		y = rand() % 300;
		red = rand() % 256;
		green = rand() % 256;
		blue = rand() % 256;
		SetPixel(hdc, x, y, RGB(red, green, blue));
	}
	- getch();//입력을 받을 수 있도록 대기하는 것
	system("pause");
}
