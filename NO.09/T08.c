#include <stdio.h>

double power(double num, int n);

int main(void)
{
    double num;
    int n;

    printf("请输入一个数：\n");
    while (scanf("%lf", &num) == 1)
    {
        printf("请输入次方数：\n");
        scanf("%d", &n);
        num = power(num, n);
        printf("%.2lf\n", num);
        printf("现在，请输入新的数字：\n");
        while (getchar() != '\n')
            continue;
    }
    printf("结束啦~");

    return 0;
}

double power(double num, int n)
{
    int i;
    double input = 1;

    if (n > 0)
    {
        for (i = 0; i < n; i++)
            input *= num;
    }
    else if(n < 0)
    {
        for (i = 0; i > n; i--)
            input *= 1 / num;
    }
    else
    {
        if (num == 0)
        {
            printf("0的0次幂不存在\n");
            return 1;
        }
        else
            return 0;
    }

    return input;
}