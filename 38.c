#include <stdio.h>

int main() {
	int x;
	//scanf("%d",&x);
	x = 7000;
	int mask = 10000;
	do {
		int d = x / mask;
		x %= mask;
		mask /= 10;
		printf("x=%d,mask=%d,d=%d\n", x, mask, d);
	} while (mask > 0);
	printf("\n");
	return 0;
}