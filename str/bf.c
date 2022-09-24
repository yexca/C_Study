// BF算法（串模式匹配算法）
// 判断主串和子串的普通的模式匹配算法
#include <string.h>
#include <stdio.h>

int mate(char *str1, char *str2);

int main(void)
{
    int a;
    a = mate("abvxjvasdf", "asdf");
    if (a)
        printf("str2是str1的子串");

    return 0;
}

int mate(char *str1, char *str2)
{
    int i, j;
    i = j = 0;

    while (i < strlen(str1) && j < strlen(str2))
    {
        if (str1[i] == str2[j])
        {
            i++;
            j++;
        }
        else
        {
            i = i - j + 1;
            j = 0;
        }
    }
    if (j = strlen(str2))
        return i-j+1;
    return 0;
}