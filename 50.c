#include <stdio.h>
int isprise(int i)
{
	int ret = 1;
	int k;
	for (k = 2; k < i - 1; k++) {
		if (i % k == 0) {
			ret = 0;
			break;
		}
	}
	return ret;
}
int main() {
	int m, n;
	int sum = 0;
	int cnt = 0;
	int i;
	scanf("%d %d", &m, &n);
	if (m == 1)m = 2;
	for (i = m; i <= n; i++) {
		if (isprise) {
			sum += i;
			cnt++;
		}
	}
	return 0;
}