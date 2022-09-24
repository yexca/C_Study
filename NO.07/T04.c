#include <stdio.h>

int main(void)
{
    int n = 0;
    char ch;

    while (1)
    {
        ch = getchar();
        if ('#' == ch)
            break;
        else if ('!' == ch || '.' == ch)
            n++;
        else
            continue;
    }
    printf("一共替换%d次~\n", n);

    return 0;
}