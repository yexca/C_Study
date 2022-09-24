#include "fun08.h"

int main(void)
{
    char choice;
    float first_number, second_number, n;

    choice = get_choice();
    
    while (choice != 'q')
    {
        first_number = get_first_number();
        second_number = get_second_number(choice);
        n = calculate(first_number, second_number, choice);
        output(first_number, second_number, n, choice);
        while (getchar() != '\n')
            continue;
        change();
        choice = get_choice();
    }
    printf("结束啦~\n");

    return 0;
}