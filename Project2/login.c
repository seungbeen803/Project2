#include<stdio.h>
#include<Windows.h>
#define SUCCESS 1
#define FAIL 2
int check(int id, int password) { //체크 함수, 매개변수 2개, 반환형 정수
	static int super_id = 1234;
	static int super_password = 5678;
	static int try_count = 0;

	try_count++;
	if (try_count > 5) {
		printf("횟수 초과\n");
		exit(1);//프로그램 종료 정상적인 종료 1, 그외에 종료 상관없음
	}
	if (id == super_id && password == super_password)
		return SUCCESS;
	else
		return FAIL;
}
void main(void) {
	int id, password, result;
	while (1) {
		printf("id:___\b\b\b\b");
		scanf("%d", &id);
		printf("pass:___\b\b\b\b");
		scanf("%d", &password);
		result = check(id, password);
		if (result == SUCCESS)break;
	}
	printf("로그인 성공\n");
	system("pause");
}