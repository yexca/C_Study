#include "fun08.h"

char get_choice(void)
{
    char choice;

    printf("Enter the operation of your choices:\n");
    printf("a. add          s. subtract\n");
    printf("m. multiply     d. divide\n");
    printf("q. quit\n");
    scanf("%c", &choice);
    switch (choice)
    {
    case 'a':
        break;
    case 's':
        break;
    case 'm':
        break;
    case 'd':
        break;
    case 'q':
        break;
    
    default:
        printf("请输入正确的选项\n");
        choice = 'q';
        break;
    }
    
    return choice;
}


float get_first_number(void)
{
    float first_number;

    printf("Enter first number: \n");
    while (scanf("%f", &first_number) != 1)
        printf("请输入有效的数字：\n");

    return first_number;
}


float get_second_number(char choice)
{
    float second_number;

    printf("Enter second number: \n");
    while (scanf("%f", &second_number) != 1)
        printf("请输入有效的数字：\n");
    if (choice == 'd')
    {
        while (1)
        {    
            printf("请输入有效的数字：\n");
            scanf("%f", &second_number);
            
            if (second_number != 0)
                break;
        }
    }

    return second_number;
}


float calculate(float first_number, float second_number, char choice)
{
    float n;

    switch (choice)
    {
    case 'a':
        n = first_number + second_number;
        break;
    case 's':
        n = first_number - second_number;
        break;
    case 'm':
        n = first_number * second_number;
        break;
    case 'd':
        n = first_number / second_number;
        break;
    
    default:
        break;
    }

    return n;
}


void output(float first_number, float second_number, float n, char choice)
{
    switch (choice)
    {
    case 'a':
        printf("%.2f + %.2f = %.2f", first_number, second_number, n);
        break;
    case 's':
        printf("%.2f - %.2f = %.2f", first_number, second_number, n);
        break;
    case 'm':
        printf("%.2f * %.2f = %.2f", first_number, second_number, n);
        break;
    case 'd':
        printf("%.2f / %.2f = %.2f", first_number, second_number, n);
        break;
    
    default:
        break;
    }
}


void change(void)
{
    printf("下一轮将在三秒后开始\n3\n");
    Sleep(1000);
    printf("2\n");
    Sleep(1000);
    printf("1\n");
    Sleep(1000);
}