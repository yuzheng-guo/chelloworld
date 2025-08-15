#include <stdio.h>
int main() {
	int i;
	int sum;
	for (i = 1, sum = 0; i <= 10; i++) {
		sum += i;
	}
	printf("%d\t", sum);
	for (i = 20, sum = 0; i <= 30; i++) {
		sum += i;
	}
	printf("%d\t", sum);
	for (i = 35, sum = 0; i <= 45; i++) {
		sum += i;
	}
	printf("%d\t", sum);
	return 0;
}