#include <stdio.h>
#include <string.h>

int main(void)
{
    char name1[40], name2[40];
    int n1, n2;

    printf("请输入您的名：\n");
    scanf("%s", name1);
    n1 = strlen(name1);
    printf("请输入您的姓：\n");
    scanf("%s", name2);
    n2 = strlen(name2);
    printf("%s %s\n", name1, name2);
    printf("%*d %*d\n", n1, n1, n2, n2);
    printf("%s %s\n", name1, name2);
    printf("%-*d %-*d", n1, n1, n2, n2);

    return 0;
}