#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
    int i, j;
    char ch;
    i = j = 5;
    ch = '*';

    chline(ch, i, j);

    return 0;
}

void chline(char ch, int i, int j)
{
    int index1, index2;

    for (index1 = 0; index1 < i; index1++)
    {
        for (index2 = 0; index2 < j; index2++)
            printf("%c", ch);
        printf("\n");
    }
}