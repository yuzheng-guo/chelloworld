#include<stdio.h>
int main() {
	const int AMOUNT = 100;//const��ʾ�����޸ĵĳ���
	int price = 0;
	printf("������");
	scanf("%d", &price);
	int change = AMOUNT - price;
	printf("�����%dԪ\n", change);
	return 0;
}
