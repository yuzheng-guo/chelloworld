#include <stdio.h>
#include <stdlib.h>  // 提供 rand() 和 srand()
#include <time.h>    // 提供 time()

int main() {
	// 初始化随机数种子
	srand((unsigned int)time(NULL));

	// 生成 1~100 的随机数
	int secret = rand() % 100 + 1;

	int guess = 0;
	int count = 0;

	printf("欢迎来到猜数字游戏！\n");
	printf("我已经想好了一个 1 到 100 之间的数字。\n");

	do {
		printf("请输入你猜的数字：");
		scanf("%d", &guess);
		count++;

		if (guess > secret) {
			printf("猜大了！\n");
		}
		else if (guess < secret) {
			printf("猜小了！\n");
		}
		else {
			printf("恭喜你，猜对了！你一共猜了 %d 次。\n", count);
		}
	} while (guess != secret);

	return 0;
}