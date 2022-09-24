#include <stdio.h>

int main(void)
{
    int i,sum;

    sum = 0;
    for(i=1;i<=100;i++)
    {
        sum += i;
    }
    printf("The sum is %d", sum);

    return 0;
}