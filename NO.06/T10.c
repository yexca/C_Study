#include <stdio.h>

void cal(int n1, int n2);

int main(void)
{
    int n1, n2;

    printf("请输入上下限数：\n");
    scanf("%d %d", &n1, &n2);
    while (n2 > n1)
    {
        cal(n1, n2);
        printf("请输入上下限数：\n");
        scanf("%d %d", &n1, &n2);
    }
    printf("结束啦~\n");

    return 0;
}

void cal(int n1, int n2)
{
    long sum;
    int i;

    for (i = n1; i <= n2; i++)
    {
        sum += i * i;
    }
    printf("The sum is: %ld\n", sum);
}