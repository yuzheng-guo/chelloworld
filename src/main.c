#include <stdio.h>
#include "hello.h"

int main(void) {
    // 调用say_hello函数
    say_hello();
    
    // 调用add函数并显示结果
    int result = add(5, 3);
    printf("5 + 3 = %d\n", result);
    
    printf("项目结构初始化完成！\n");
    return 0;
} 