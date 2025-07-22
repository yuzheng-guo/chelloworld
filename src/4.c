#include<stdio.h>
int main() {
	const int AMOUNT = 100;//const表示不可修改的常量
	int price = 0;
	printf("输入金额");
	scanf("%d", &price);
	int change = AMOUNT - price;
	printf("找你的%d元\n", change);
	return 0;
}
