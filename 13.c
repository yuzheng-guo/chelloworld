#include<stdio.h>
int main() {
	const double a = 8.25;
	const int b = 40;
	double pay = 0;
	int hour;
	printf("�㹤����Сʱ����");
	scanf("%d", &hour);
	printf("\n");
	if (hour > b) { pay = b * a + (hour - b) * (a * 1.5); }
	else {
		pay = hour * a;
	}printf("Ӧ�����ʣ�%f\n", pay);

	return 0;
}