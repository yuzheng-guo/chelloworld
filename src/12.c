#include<stdio.h>
int main() {
	int price = 0;
	int bill = 0;
	printf("�������");
	scanf("%d", &price);
	printf("������Ʊ�棺");
	scanf("%d", &bill);
	if (bill >= price) {
		printf("Ӧ�����㣺%d\n", bill - price);
	}
	else {
		printf("���Ǯ����");
	}
	return 0;
}