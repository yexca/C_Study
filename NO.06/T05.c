#include <stdio.h>

int main(void)
{
    int i, j;
    char ch, ch_input;

    printf("请输入一个大写字母：");
    scanf("%c", &ch_input);
    ch = 'A';
    for (i = 0; i <= ch_input - 'A'; i++, ch++)
    {
        for (j = 0; j < ch_input - ch; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%c", 'A' + j);
        }
        for (j = i - 1; j >= 0; j--)
        {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}