#include <stdio.h>
#define SHUI_300 0.15
#define SHUI_450 0.20
#define SHUI_OTHER 0.25
#define SHUI_300_MONEY 300 * SHUI_300
#define SHUI_450_MONEY SHUI_300_MONEY + 150 * SHUI_450

void ui(void);
void choice(int n, int time);
float money_basic(float money_hr, int time);
float calculate(float money_basics);

int main(void)
{
    int n, time;

    ui();
    scanf("%d", &n);
    while (n < 1 && n > 5)
    {
        printf("请输入1-5以内的数字\n");
        scanf("%d", &n);
    }
    if (5 != n)
    {
        printf("请输入您工作的时间(单位：小时)：\n");
        scanf("%d", &time);
        while (time <0)
        {
            printf("请输入有效的工作时间(单位：小时)：\n");
            scanf("%d", &time);
        }
        choice(n, time);
    }
    else
        printf("退出啦~\n");

    return 0;
}


void ui(void)
{
    int i;
    for (i = 0; i < 65; i++)
        printf("*");
    printf("\n\nEnter the number corresponding to the desire pay rate or action:\n");
    printf("1) $8.75/hr                2) $9.33/hr\n");
    printf("3) $10.00/hr               4) $11.20/hr\n");
    printf("5) quit\n");
    for (i = 0; i < 65; i++)
        printf("*");
    printf("\n");
}

void choice(int n, int time)
{
    float money_basics, money;
    switch (n)
    {
    case 1:
        money_basics = money_basic(8.75, time);
        money = calculate(money_basics);
        printf("您的工资为$%.2f\n", money);
        break;
    case 2:
        money_basics = money_basic(9.33, time);
        money = calculate(money_basics);
        printf("您的工资为$%.2f\n", money);
        break;
    case 3:
        money_basics = money_basic(10.00, time);
        money = calculate(money_basics);
        printf("您的工资为$%.2f\n", money);
        break;
    case 4:
        money_basics = money_basic(11.20, time);
        money = calculate(money_basics);
        printf("您的工资为$%.2f\n", money);
        break;
    case 5:
        printf("退出啦~\n");
        break;
    
    default:
        break;
    }
}

float money_basic(float money_hr, int time)
{
    float money_basics;
    if (time <= 40)
        money_basics = money_hr * time;
    else
        money_basics = money_hr * 40 + (time - 40) * 1.5 * money_hr;

    return money_basics;
}

float calculate(float money_basics)
{
    float money, money_shui;

    if (money_basics < 300)
        money_shui = money_basics * SHUI_300;
    else if (money_basics < 450) 
        money_shui = SHUI_300_MONEY + (money_basics - 300) * SHUI_450;
    else
        money_shui = SHUI_450_MONEY + (money_basics - 450) * SHUI_OTHER;
    money = money_basics - money_shui;

    return money;
}