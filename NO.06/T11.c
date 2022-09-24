#include <stdio.h>
#define SIZE 8

int main(void)
{
    int num[SIZE];
    int i;

    printf("请输入八个数字");
    for ( i = 0; i < SIZE; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("这些数字为：\n");
    for ( i = SIZE - 1; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }
    
    return 0;
}

