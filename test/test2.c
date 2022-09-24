#include<stdio.h>

int main(void)
{
    float single_long = 7.4;
    float long_1 = 2.9;
    float long_2 = 2.1;
    float long_3 = 1.5;

    int i,j;
    float leave;
    
    for (i = 0; i < 100; i++)
    {
        // long_1
        leave = single_long - long_1;
        for (j = 1; j < 100; j++)
        {
            leave = leave - long_1;
            if (j < 100 && leave < long_1)
                leave = single_long;
        }
    }
}