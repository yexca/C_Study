#include <stdio.h>
#define SIZE 255

int main(void)
{
    char ch[SIZE];
    int index, i;
    index = -1;

    do
    {
        index++;
        scanf("%c", &ch[index]);
    } while (ch[index] != '\n');

    for (i = 0; i <= index; i++)
    {
        printf("%c", ch[i]);
    }
    
    return 0;
}