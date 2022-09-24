#include <stdio.h>

int main(void)
{
    double n1, n2;

    printf("请输入俩浮点数：\n");
    scanf("%ld %ld", &n1, &n2);
    printf("值：%.2lf\n", (n1 - n2)/(n1 * n2));

    return 0;
}