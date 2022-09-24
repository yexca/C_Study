#include <stdio.h>

int main(void)
{
    int n, i;
    int flag;
    int k;

    while (1)
    {
        printf("请输入一个正整数：\n");
        scanf("%d", &n);
        if (n >= 0)
            break;
    }
    for (i = 2; i <= n; i++)
    {
        flag = 1;
        for (k = 2; (k * k) <= i; k++)
        {
            if (i % k == 0)
                flag = 0;
        }
        if (flag)
            printf("%d ", i);
    }

    return 0;
}