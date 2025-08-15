#include <stdio.h>

int main() {
	int n;
	doubled a, b;
	doubled sum = 0.0;
	int i;
	double t;
	scanf("%d", &n);
	a = 2;
	b = 1;
	for (i = 1; i <= n; i++) {
		sum += a / b;
		t = a;
		a = a + b;
		b = t;
	}
	printf("%.2f\n", sum);
	return 0;
}