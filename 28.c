#include <stdio.h>

int main() {
	int n;
	int factorial = 1;

	printf("请输入一个非负整数：");
	scanf("%d", &n);

	if (n < 0) {
		printf("错误：负数没有阶乘！\n");
	}
	else {
		for (int i = 1; i <= n; i++) {
			factorial *= i;
		}
		printf("%d! = %d\n", n, factorial);
	}

	return 0;
}