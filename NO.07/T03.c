#include <stdio.h>

int main(void)
{
    int n_odd, n_even, sum_odd, sum_even, n;
    float a_odd, a_even;

    sum_odd = sum_even = n_odd = n_even = 0;
    while (1)
    {
        printf("请输入数字：(输入0以退出)\n");
        scanf("%d", &n);
        if (0 == n)
            break;
        else if (n % 2 == 0)
        {
            n_even++;
            sum_even += n;
        }
        else
        {
            n_odd++;
            sum_odd += n;
        }
    }
    a_odd = (float)sum_odd / n_odd;
    a_even = (float)sum_even / n_even;
    printf("输入的偶数个数：%d；这些偶数的平均值：%.2f\n", n_even, a_even);
    printf("输入的奇数个数：%d；这些奇数的平均值：%.2f\n", n_odd, a_odd);

    return 0;
}