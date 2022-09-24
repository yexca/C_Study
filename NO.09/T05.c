#include <stdio.h>

void max(double * num1, double * num2);

int main(void)
{
    double num1, num2;

    num1 = 10.0;
    num2 = 2.3;

    max(&num1, &num2);
    printf("%.2lf, %.2lf", num1, num2);

    return 0;
}

void max(double * num1, double * num2)
{
    if (*num1 > *num2)
        *num2 = *num1;
    else
        *num1 = *num2;
}