#include <stdio.h>

void chprinter(char ch, int number, int line);

int main(void)
{
    int i, j;
    char ch;

    ch = '*';
    i = j = 5;

    chprinter(ch, i, j);

    return 0;
}

void chprinter(char ch, int number, int line)
{
    int i, j;

    for (i = 0; i < line - 1; i++)
        printf("%d\n", i + 1);
    for (j = 0; j < number; j++)
        printf("%c", ch);
}