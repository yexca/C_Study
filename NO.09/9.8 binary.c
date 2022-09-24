#include <stdio.h>

void cal(int n);

int main(void)
{
    int n;

    printf("请输入一个数字：\n");
    scanf("%d", &n);
    printf("该数的二进制为：");
    cal(n);

    return 0;
}

void cal(int n)
{
    if (n >= 2)
    {
        cal(n / 2);
        
    }
    printf("%d", n % 2);
}