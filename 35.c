#include <stdio.h>

int main() {
	int n;
	int i;
	double ret = 0.0;
	int a = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret += a/ i;
		a = -a;
	}
	printf("%f\n", ret);
	return 0;
}
#include <stdio.h>

int main() {
	int n;
	int i;
	double ret = 0.0;
	double a = 1.0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret += a / i;
		a = -a;
	}
	printf("%f\n", ret);
	return 0;
}
