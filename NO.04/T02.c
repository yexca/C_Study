#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[40];
    int len = strlen(name);

    printf("请输入您的姓名：\n");
    scanf("%s", name);
    printf("\"%s\"\n", name);
    printf("%20s\n", name);
    printf("%-20s\n", name);
    printf("%*s", len + 3, name);

    return 0;
}