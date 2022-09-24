#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch;
    int n_L, n_U;

    while ((ch = getchar()) != EOF)
    {
        if (isupper(ch))
            n_U++;
        else if (iswlower(ch))
            n_L++;
    }
    printf("大写字母：%d\n小写字母：%d\n", n_U, n_L);

    return 0;
}