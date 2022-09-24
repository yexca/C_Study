#include <stdio.h>

int main(void)
{
    int friends = 5;
    int i = 0;

    while (friends <= 150)
    {
        i++;
        friends -= i;
        friends *= 2;
    }
    printf("%d", i);


    return 0;
}