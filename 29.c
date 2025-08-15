#include <stdio.h>

int main() {
    int n, is_prime = 1;

    printf("请输入一个大于1的整数：");
    scanf("%d", &n);

    if (n <= 1) {
        is_prime = 0;
    }
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("%d 是素数。\n", n);
    }
    else {
        printf("%d 不是素数。\n", n);
    }

    return 0;
}