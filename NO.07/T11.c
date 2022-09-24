#include <stdio.h>
#include <ctype.h>
#define ARTICHOKE_PRICE 2.05
#define BEET_PRICE 1.15
#define CARROT_PRICE 1.09
#define FREIGHT1 6.5
#define FREIGHT2 14
#define FREIGHT3 0.5
#define DISCOUNT 0.05

void ui(void);
float calculate(float n);

int main(void)
{
    float artichoke_n, beet_n, carrot_n, n;         // 蔬菜的重量
    float artichoke_m, beet_m, carrot_m, m, m_d;    // 蔬菜的价格
    int flag_a, flag_b, flag_c;     // 是否购买相应货物
    float freight;  // 运费
    char ch;    // 用户的选择

    artichoke_n = beet_n = carrot_n = 0;
    artichoke_m = beet_m = carrot_m = 0;
    flag_a = flag_b = flag_c = 0;

    while(1)
    {
        ui();
        while(1)
        {
            printf("请输入要购买的蔬菜项目(字母): \n");
            scanf("%c", &ch);
            if (isupper(ch))
                ch = tolower(ch);
            if (ch >= 'a' && ch <= 'd');
                break;
        }

        if (ch == 'd')
            break;

        while(1)
        {
            printf("请输入要购买的重量(单位：磅)：\n");
            scanf("%f", &n);
            if (n >= 0)
                break;
        }

        switch (ch)
        {
        case 'a':
            artichoke_n += n;
            artichoke_m += n * ARTICHOKE_PRICE;
            flag_a = 1;
            break;
        case 'b':
            beet_n += n;
            beet_m += n * BEET_PRICE;
            flag_b = 1;
            break;
        case 'c':
            carrot_n += n;
            carrot_m += n * CARROT_PRICE;
            flag_c = 1;
            break;

        default:
            break;
        }
        while (getchar() != '\n')
            continue;
    }

    n = artichoke_n + beet_n + carrot_n;    // 总重量
    m = artichoke_m + beet_m + carrot_m;    // 总价格
    freight = calculate(n);
    
    if (m >= 100)
    {
        m_d = m * DISCOUNT;
        printf("物品    单价    订购的重量  订购的费用\n");
        if (flag_a)
            printf("洋蓟    %f      %.2f    %.2f\n", ARTICHOKE_PRICE, artichoke_n, artichoke_m);
        if (flag_b)
            printf("甜菜    %f      %.2f    %.2f\n", BEET_PRICE, beet_n, beet_m);
        if (flag_c)
            printf("胡萝卜  %f      %.2f    %.2f\n", CARROT_PRICE, carrot_n, carrot_m);
        printf("订购的总费用：%.2f\n折扣：%f\n运费和包装费：%.2f\n最终费用:%.2f",
                 m, DISCOUNT, freight, m * DISCOUNT + freight);
    }
    else
    {
         printf("物品    单价    订购的重量  订购的费用\n");
        if (flag_a)
            printf("洋蓟    %f      %.2f    %.2f\n", ARTICHOKE_PRICE, artichoke_n, artichoke_m);
        if (flag_b)
            printf("甜菜    %f      %.2f    %.2f\n", BEET_PRICE, beet_n, beet_m);
        if (flag_c)
            printf("胡萝卜  %f      %.2f    %.2f\n", CARROT_PRICE, carrot_n, carrot_m);
        printf("订购的总费用：%.2f\n折扣：0.00\n运费和包装费：%.2f\n最终费用:%.2f",
                 m, freight, m + freight);
    }
}


void ui(void)
{
    int i;
    for (i = 0; i < 40; i++)
        printf("*");
    printf("\n欢迎选购\n\n");
    printf("<a> 洋蓟        <b> 甜菜\n");
    printf("<c> 胡萝卜      <d> 选购完毕\n\n");
    for (i = 0; i < 40; i++)
        printf("*");
    printf("\n");
}

float calculate(float n)
{
    float freight;

    if (n <= 5)
        freight = FREIGHT1;
    else if (n >= 5 && n <= 20)
        freight = FREIGHT2;
    else
        freight = FREIGHT2 + (n - FREIGHT2) * FREIGHT3;
    
    return freight;
}