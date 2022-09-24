#include <stdio.h>
#define MAX 100
#define MIN 1

int main(void)
{
    int n = (MIN + MAX) / 2;
    int ch;
    int min = MIN;
    int max = MAX;

    printf("是%d吗\n", n);
    printf("请输入“d”大或“x小(y表示猜测正确)”\n");
    while ((ch = getchar()) != 'y')
    {
        if ('d' == ch)
        {
            max = n;
            n = (min + n) / 2;
        }
        else if ('x' == ch)
        {
            min = n;
            n = (max + n) / 2;
        }
        while (getchar() != '\n')
            continue;
        printf("是%d吗\n", n);
    }
    printf("拜拜~\n");

    return 0;
}