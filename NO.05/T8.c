#include <stdio.h>

int main(void)
{
    int c, n1, n2;

    printf("请输入除数：\n");
    scanf("%d", &n2);
    printf("现在请输入第一个被除数：(输入0以退出)\n");
    scanf("%d", &n1);
    while (n1 > 0)
    {
        c = n1 % n2;
        printf("求模运算结果：%d\n", c);
        printf("现在请输入下一个被除数：(输入0以退出)\n");
        scanf("%d", &n1);
    }
    printf("结束啦~\n");
    
    return 0;
}