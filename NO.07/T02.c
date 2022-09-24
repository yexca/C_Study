#include <stdio.h>

int main(void)
{
    char ch;
    int i = 0;

    while ((ch = getchar()) != '#')
    {
        i++;
        printf("%3c %3d", ch, ch);
        if (i % 8 == 0)
            printf("\n");
    }
    
    return 0;
}