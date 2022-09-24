#include <stdio.h>

void max(double *x, double *y, double *z);

int main(void)
{
    double x, y, z;

    x = 3.0;
    y = 2.0;
    z = 1.0;

    max(&x, &y, &z);

    printf("%.2lf   %.2lf   %.2lf", x, y, z);

    return 0;
}

void max(double *x, double *y, double *z)
{
    double temp;

    if (*y < *x)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
    if (*z < *x)
    {
        temp = *x;
        *x = *z;
        *z = temp;
    }
    if (*z < *y)
    {
        temp = *y;
        *y = *z;
        *z = temp;
    }
}