// addemup -- 几种常见的语句
#include <stdio.h>
int main(void)                  // 计算前20个整数的和
{
    int count, sum;             // 声明

    count = 0;                  // 表达式语句
    sum = 0;                    // 表达式语句
    while (count++ < 20)
    {
        sum = sum + count;      // 迭代语句
    }
    printf("sum = %d\n", sum);  // 表达式语句


    return 0;                   // 跳转语句
}