#include <stdio.h>

int main(void)
{
    int n, m;

    printf("请输入一个整数：\n");
    scanf("%d", &n);
    m = n + 10;
    while (n < m)
    {
        printf("%d ", n);
        n++;
    }
    printf("%d\n",n);

    return 0;
}