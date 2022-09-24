#include "fun10.h"

void ui(void)
{
    int i;
    for (i = 0; i < 65; i++)
        printf("*");
    printf("\n\nEnter the number corresponding to the desire pay rate or action:\n");
    printf("1) 单身                         2) 户主\n");
    printf("3) 已婚，共有                   4) 已婚，离异\n");
    printf("5) 退出\n");
    for (i = 0; i < 65; i++)
        printf("*");
    printf("\n");
}

int choice(int n)
{
    int break_;

    switch (n)
    {
    case 1:
        break_ = BREAK1;
        break;
    case 2:
        break_ = BREAK2;
        break;
    case 3:
        break_ = BREAK3;
        break;
    case 4:
        break_ = BREAK4;
        break;

    default:
        break;
    }

    return break_;
}

float calculate(int break_, int money_basic)
{
    float money;
    if (money_basic <= break_)
        money = money_basic * SHUI_1;
    else
        money = break_ * SHUI_1 + (money_basic - break_) * SHUI_2;

    return money;
}