#include <stdio.h>

int main(void)
{
    double daphne, deirdre;
    int i = 0;
    daphne = deirdre = 100.0;

    do
    {
        i++;
        daphne += 10;
        deirdre *= 1.05;
    } while (deirdre < daphne);
    printf("%d %.2lf %.2lf", i, deirdre, daphne);

    return 0;
}