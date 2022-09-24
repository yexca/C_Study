#include "fun10.h"
#include <windows.h>

int main(void)
{
    float money;
    int n, break_, money_basic;

    while (1)
    {
        ui();
        while (1)
        {
            printf("请输入您的身份：\n");
            scanf("%d", &n);
            if (n >= 1 && n <= 5)
                break;
        }
        if (5 == n)
            break;
        while (1)
        {
            printf("请输入您的工资：\n");
            scanf("%d", &money_basic);
            if (money_basic >= 0)
                break;
        }
        break_ = choice(n);
        money = calculate(break_, money_basic);
        printf("您的税金为：%.2f\n", money);
        printf("5秒后将开启新一轮输入\n");
        Sleep(5000);
    }
    printf("结束啦~");

    return 0;
    /*ui
    选择（有效
    money_basic（有效
    选择  - 函数choice - break
    money = calc（break1，money_basic）*/
}