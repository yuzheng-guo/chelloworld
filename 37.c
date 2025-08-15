#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);
	int mask = 10000;
	do {
		int d = x / mask;
		x %= mask;
		mask /= 10;
		printf("x=%d,mask=%d,d=%d\n", x, mask, d);
	} while (x > 0);
	printf("\n");
	return 0;
}