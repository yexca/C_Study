#include "fun.h"

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

float choice(int n)
{
    float money_hr;

    switch (n)
    {
    case 1:
        money_hr = 8.75;
        break;
    case 2:
        money_hr = 9.33;
        break;
    case 3:
        money_hr = 10.00;
        break;
    case 4:
        money_hr = 11.20;
        break;
    case 5:
        printf("退出啦~\n");
        break;
    
    default:
        break;
    }

    return money_hr;
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