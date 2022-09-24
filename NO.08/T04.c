#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    int ch, n, pre_ch, c;
    bool flag = false;
    c = n = 0;


    while ((ch = getchar()) != EOF)
    {
        if (ispunct(ch))
            continue;
        if (!isspace(ch) && !flag)
        {
            n++;
            flag = true;
        }
        if (isspace(ch) && flag)
            flag = false;
        if (!isspace(ch) && !ispunct(ch))
            c++;
        
    }
    printf("%.2f", (float)c / n);

    return 0;
}