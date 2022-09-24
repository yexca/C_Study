#include <stdio.h>

int main(void)
{
    char ch[26];
    char i;
    int k;

    for ( k = 0, i = 'a'; i <= 'z'; i++, k++)
    {
        ch[k] = i;
        printf("%c", ch[k]);
    }
    
    return 0;
}