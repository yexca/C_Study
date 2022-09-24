#include <stdio.h>

double average(double number1, double number2);

int main(void)
{
    double i, j, z;

    i = 5.0;
    j = 10.0;

    z = average(i, j);
    printf("i:%lf,  j:%lf   z:%lf", i, j, z);

    return 0;
}

double average(double number1, double number2)
{
    double ave;

    number1 = 1 / number1;
    number2 = 1 / number2;
    ave = (number1 + number2) / 2;
    ave = 1 / ave;

    return ave;
}