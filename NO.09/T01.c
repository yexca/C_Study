#include <stdio.h>

int min(int x, int y);

int main(void)
{
    int x, y, z;

    x = 5;
    y = 10;

    z = min(x, y);

    printf("%d,%d,%d", x, y,z);
}

int min(int x, int y)
{
    return (x < y) ? x : y;
}