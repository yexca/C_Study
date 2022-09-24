#include <stdio.h>

int main(void)
{
    double money = 100.0;
    int i = 0;

    while (money > 0.0)
    {
        money -= 10;
        money *= 1.08;
        i++;
    }
    printf("%d", i);

    return 0;
}