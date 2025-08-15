#include<stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	switch (a) {
	case 1:
		printf("你好");
		break;
	case 2:
		printf("早上好");
		break;
	case 3:
		printf("晚上好");
		break;
	case 4:
		printf("再见");
		break;
	default:
		printf("啊，什么呀？");
	}
	return 0;
}