#include <stdio.h>
#define K_C 273.16

void Temperatures(double d);

int main(void)
{
    double d;
    int bool;

    printf("请输入华氏温度值：\n");
    bool = scanf("%lf", &d);
    while (bool == 1)
    {
        Temperatures(d);
        bool = scanf("%lf", &d);
    }
    
    return 0;
}

void Temperatures(double d)
{
    double c, k;

    c = 5.0 / 9.0 * (d - 32.0);
    k = c + K_C;
    printf("%ldC,%ldK\n", c, k);
}