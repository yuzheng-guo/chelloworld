#include <stdio.h>

int main() {
	int n;
	int factorial = 1;

	printf("������һ���Ǹ�������");
	scanf("%d", &n);

	if (n < 0) {
		printf("���󣺸���û�н׳ˣ�\n");
	}
	else {
		for (int i = 1; i <= n; i++) {
			factorial *= i;
		}
		printf("%d! = %d\n", n, factorial);
	}

	return 0;
}