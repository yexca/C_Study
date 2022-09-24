#include <stdio.h>

int main(void)
{
    int n = 0;
    char pre_ch, ch;

    pre_ch = getchar();
    while ((ch = getchar()) != '#')
    {
        if (pre_ch == 'e' && ch == 'i')
            n++;
        pre_ch = ch;
    }
    printf("共出现了%d次", n);

    return 0;
}