#include <stdio.h>
#define JIA_SHENG 3.785
#define YING_QIAN 1.609

int main(void)
{
    float licheng, jialun, sheng, qianmi;

    printf("请输入旅行的里程和消耗的汽油量(加仑)：\n");
    scanf("%f %f", &licheng, &jialun);
    printf("每加仑行驶的英里数：%.1f\n", licheng / jialun);
    qianmi = jialun / JIA_SHENG;
    sheng = licheng / YING_QIAN;
    printf("升/100公里：%.1f", sheng / 100 * qianmi);

    return 0;
}