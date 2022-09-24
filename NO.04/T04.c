#include <stdio.h>

int main(void)
{
    char name[40];
    float height;

    printf("请输入您的身高和姓名：\n");
    scanf("%f %s", &height, name);
    printf("%s，您%.2f米高", name, height);

    return 0;
}