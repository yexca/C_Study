#include <stdio.h>

int main(void)
{
    int ch;

    while ((ch = getchar()) != EOF)
    {
        printf("%3d %3c", ch);
    }
    printf("结束啦~");

    return 0;
}