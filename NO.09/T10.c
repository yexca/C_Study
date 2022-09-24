#include <stdio.h>

void to_base_n(int num, int n);

int main(void)
{
    int num, n;

    printf("请输入两个数值：\n");
    while(scanf("%d %d", &num, &n) == 2)
    {
        to_base_n(num, n);
        printf("\n");
        printf("现在，请再次输入两个数字\n");
    }
    printf("结束啦~");

    return 0;
}

void to_base_n(int num, int n)
{
    int aim_num;

    if (num >= n)
    {
        aim_num = num % n;
        to_base_n(num / n, n);
    }
    printf("%d", aim_num);
}