#include <stdio.h>

int main() {
    int n, is_prime = 1;

    printf("������һ������1��������");
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
        printf("%d ��������\n", n);
    }
    else {
        printf("%d ����������\n", n);
    }

    return 0;
}