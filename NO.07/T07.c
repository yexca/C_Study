#include <stdio.h>
#define BASIC 1000
#define SHUI 300 * 0.15 + 150 * 0.2

int main(void)
{
    float money_shui, money_basic, money;
    int time, time_jiaban;

    printf("请输入工作时间(单位：小时)：\n");
    scanf("%d", &time);
    if (time <= 40)
    {
        money_basic = BASIC * time;
        money_shui = SHUI + (money_basic - 450) * 0.25;
        money = money_basic - money_shui;
    }
    else
    {
        money_basic = BASIC * 40 + (time - 40) * 1.5 * BASIC;
        money_shui = SHUI + (money_basic - 450) * 0.25;
        money = money_basic - money_shui;
    }
    printf("您的工资为：%.2f", money);

    return 0;
}