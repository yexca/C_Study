#include <stdio.h>

int main(void)
{
    int n_space, n_t, n_o, n;
    char ch;
    n = 0;

    while(1)
    {
        ch = getchar();
        if (ch == ' ')
            n_space++;
        else if (ch == '\t')
            n_t++;
        else if (ch == '#')
            break;
        else
            n_o++;
        n++;
    }
    printf("空格：%d，换行字符：%d，其他字符：%d\n总共：%d", n_space, n_t, n_o, n);

    return 0;
}