#include <stdio.h>

int main() {
	int x;
	int one, two, five;
	int e = 0;
	scanf("%d", &x);
	for (one = 1; one < x * 10; one++) {
		for (two = 1; two < x * 10 / 2; two++) {
			for (five = 1; five * 10 / 5; five++) {
				if (one + two * 2 + five * 5 == x * 10) {
					printf("%d个一角加%d个贰角加%d个五角是%d元\n", one, two, five, x);
					e = 1;
					break;
				}
			}
			if (e == 1)break;
		}
		if (e == 1)break;
	}
	return 0;
}