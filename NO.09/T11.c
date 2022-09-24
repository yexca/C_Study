#include <stdio.h>

void Fibonacci(int n);

int main(void)
{
    int n = 10;

    Fibonacci(n);

    return 0;
}

void Fibonacci(int n)
{
    int i,pre_, pre, num;
    pre_ = pre = 1;
    
    printf("%4d %4d", pre_, pre);
    for (i = 0; i < n; i++)
    {
        num = pre_ + pre;
        printf("%4d", num);
        pre = pre_;
        pre_ = num;
    }
}