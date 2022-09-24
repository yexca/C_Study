#include <stdio.h>

int main(void)
{
    int i, n;
    double sum = 1.0;

    printf("请输入一个数字：\n");
    scanf("%d", &n);
    for ( i = 2; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("%lf", sum);

    return 0;
}