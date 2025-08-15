#include <stdio.h>

// 判断是否为素数
int isprime(int i) {
    if (i < 2) return 0;  // 小于2不是素数
    if (i == 2) return 1; // 2是素数
    if (i % 2 == 0) return 0; // 偶数（除了2）不是素数

    // 只需判断奇数因子，从3到√i
    for (int k = 3; k * k <= i; k += 2) {
        if (i % k == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int m, n;
    int sum = 0;
    int cnt = 0;

    scanf("%d %d", &m, &n);

    // 如果m是1，从2开始（1不是素数）
    if (m == 1) {
        m = 2;
    }

    // 遍历[m, n]区间
    for (int i = m; i <= n; i++) {
        if (isprime(i)) {  // ✅ 正确调用函数
            cnt++;
            sum += i;
        }
    }

    // ✅ 输出结果
    printf("%d %d\n", cnt, sum);

    return 0;
}