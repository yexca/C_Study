#include <stdio.h>
#define S_PER_H 60

int main(void)
{
    int min, h, i_min;

    printf("请输入分钟：(输入0以退出)\n");
    scanf("%d", &min);
    while (min > 0)
    {
        h = min / S_PER_H;
        i_min = min % S_PER_H;
        printf("%d时%d分\n", h, i_min);
        printf("请输入分钟：(输入0以退出)\n");
        scanf("%d", &min);
    }
    printf("结束！");

    return 0;
}