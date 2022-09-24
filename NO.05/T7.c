#include <stdio.h>

double vi(double n);

int main(void)
{
    double n, m;

    printf("请输入一个浮点数：\n");
    scanf("%lf", &n);
    m = vi(n);
    printf("该数字的立方值为：%lf\n", m);

    return 0;
}

double vi(double n)
{
    double m;
    m = n * n * n;

    return m;
}