#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);
	int i;
	int a = 1;
	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			a = 0;
			break;
		}
	}
	if (a == 0) {
		printf("������\n");
	}
	else {
		printf("��������\n");
	}
	return 0;
}