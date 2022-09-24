#include <stdio.h>

int main(void)
{
    int i, k;

    for ( i = 1; i < 6; i++)
    {
        for ( k = 0; k < i; k++)
        {
            printf("$");
        }
        printf("\n");
    }

    return 0;
}