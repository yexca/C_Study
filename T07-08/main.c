#include "fun.h"

int main(void)
{
    int n, time;
    float money, money_hr, money_basics;

    ui();
    while (1)
    {
        printf("请输入1-5以内的数字\n");
        scanf("%d", &n);
        if (n >= 1 && n <= 5)
            break;
    }
    if (5 != n)
    {
        while (1)
        {
            printf("请输入有效的工作时间(单位：小时)：\n");
            scanf("%d", &time);
            if (time >= 0);
                break;
        }
        money_hr = choice(n);
        money_basics = money_basic(money_hr, time);
        money = calculate(money_basics);
        printf("您的工资为$%.2f", money);
    }
    else
        printf("退出啦~\n");

    return 0;
}