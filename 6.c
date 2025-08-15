#include<stdio.h>
int main() {
	int hour1, min1, hour2, min2;
	scanf("%d %d", &hour1, &min1);
	scanf("%d %d", &hour2, &min2);
	int t1 = hour1 * 60 + min1;
	int t2 = hour2 * 60 + min2;
	int t = t2 - t1;
	printf("时间差为%d小时%d分", t / 60, t % 60);
	return 0;
}
