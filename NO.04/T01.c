#include <stdio.h>

int main(void)
{
    char name1[40], name2[40];

    printf("请输入您的姓名：\n");
    scanf("%s %s", name1, name2);
    printf("您的名姓为：%s %s", name2, name1);

    return 0;
}