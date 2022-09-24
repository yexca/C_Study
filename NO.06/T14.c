#include <stdio.h>

int main(void)
{
    int i, n;
    double sum, n1[8], n2[8];
    sum = 0.0;

    for ( i = 0; i < 8; i++)
    {
        printf("现在输入第%d个数：\n", i + 1);
        scanf("%lf", &n1[i]);
        sum += n1[i];
        n2[i] = sum;
    }
    printf("\n");
    for ( i = 0; i < 8; i++)
    {
        printf("%.2lf ", n1[i]);
    }
    printf("\n");
    for ( i = 0; i < 8; i++)
    {
        printf("%.2lf ", n2[i]);
    }
    
    return 0;
}