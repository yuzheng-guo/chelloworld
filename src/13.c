#include<stdio.h>
int main() {
	const double a = 8.25;
	const int b = 40;
	double pay = 0;
	int hour;
	printf("你工作的小时数：");
	scanf("%d", &hour);
	printf("\n");
	if (hour > b) { pay = b * a + (hour - b) * (a * 1.5); }
	else {
		pay = hour * a;
	}printf("应付工资：%f\n", pay);

	return 0;
}