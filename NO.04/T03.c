#include <stdio.h>

int main(void)
{
    float f;

    printf("请输入一个浮点数：\n");
    scanf("%f", &f);
    printf("小数点记数：%f，指数记数：%e\n", f, f);

    return 0;
}