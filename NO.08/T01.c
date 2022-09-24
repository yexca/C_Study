#include <stdio.h>

int main(void)
{
    int ch;

    ch = 0;
    while (getchar() != EOF)
    {
        ch++;
    }
    printf("%d", ch);

    return 0;
}