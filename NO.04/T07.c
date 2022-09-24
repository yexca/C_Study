#include <stdio.h>
#include <float.h>

int main(void)
{
    float f = 1.0/3.0;
    double d = 1.0/3.0;

    printf("%.6f %.6f\n", f, d);
    printf("%.12f %.12f\n", f, d);
    printf("%.16f %.16f\n", f, d);
    printf("%d %d\n", FLT_DIG, DBL_DIG);

    return 0;
}