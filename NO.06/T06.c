#include <stdio.h>

void biao(int m, int n);
int main(void)
{
    int m, n;

    printf("请输入上下限");
    scanf("%d %d", &m, &n);
    biao(m,n);

    return 0;
}

void biao(int m, int n)
{
    for (; m <= n; m++)
    {
        printf("%5d %5d %5d\n", m, m * m, m * m * m);
    }
    
}