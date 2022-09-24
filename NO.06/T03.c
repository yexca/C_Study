#include <stdio.h>

int main(void)
{
    int i, k;
    char ch;

    for (i = 1; i < 7; i++)
    {
        for (k = 0, ch = 'F'; k < i; k++, ch--)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}