#include<stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	switch (a) {
	case 1:
		printf("一月\n");
		break;
	case 2:
		printf("二月\n");
		break;
	case 3:
		printf("三月\n");
		break;
	case 4:
		printf("四月\n");
		break;
	case 5:
		printf("五月\n");
		break;
	case 6:
		printf("六月\n");
		break;
	case 7:
		printf("七月\n");
		break;
	case 8:
		printf("八月\n");
		break;
	case 9:
		printf("九月\n");
		break;
	case 10:
		printf("十月\n");
		break;
	case 11:
		printf("十一月\n");
		break;
	case 12:
		printf("十二月\n");
		break;
	default:
		printf("没有这个月份\n");
		break;
	}
	return 0;
}