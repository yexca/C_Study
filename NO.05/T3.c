#include <stdio.h>
#define D_PER_W 7

int main(void)
{
    int day, week;

    printf("请输入天数：\n");
    scanf("%d", &day);
    while (day > 0)
    {
        week = day / D_PER_W;
        day = day % D_PER_W;
        printf("%d周%d天（输入0以退出）\n", week, day);
        scanf("%d", &day);
    }
    printf("结束啦~");

    return 0;
}