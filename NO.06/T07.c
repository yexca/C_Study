#include <stdio.h>
#include <string.h>
#define SIZE 15

int main(void)
{
    char ch[SIZE];
    int i, index;
    index = -1;

    printf("输入：");
    do
    {
        index++;
        scanf("%C", &ch[index]);
    } while (ch[index] != '\n');
    for (i = index + 1; i <= SIZE; i++)
    {
        ch[i] = '\0';
    }    
    for (index = strlen(ch); index >= 0; index--)
        printf("%c", ch[index]);
    printf("\n");

    return 0;
}