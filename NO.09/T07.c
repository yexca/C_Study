#include <stdio.h>
#include <ctype.h>

int get_char(char ch);

int main(void)
{
    char ch;

    printf("请输入字符：\n");
    while ((ch = getchar()) != EOF)
        printf("%d\n", get_char(ch));

    return 0;
}

int get_char(char ch)
{
    if (isalpha(ch))
        return tolower(ch) - 'a' + 1;
    else
        return -1;
}