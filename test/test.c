#include <stdio.h>

int main(void)
{
    int const math[11] = {20, 40, 55, 65, 72, 77, 80, 82, 83, 84, 85};    // 数学课
    int const eng[11] = {30, 45, 53, 58, 62, 65, 68, 70, 72, 74, 75};     // 外语课
    int const pof[11] = {50, 70, 85, 90, 93, 95, 96, 96, 96, 96, 96};     // 专业课
    char arrange1[11], arrange2[11];
    int i,m, e, p;

    for(i = m = e = p = 0; i < 11; i++)
    {
        if(m<11 && e<11 && p<11)
        {
            if(math[m+1] - math[m] > eng[e+1] - eng[e])
                if(eng[e+1] - eng[e] > pof[p+1] - pof[p])
                {
                    arrange1[i] = 'm';
                    m++;
                }
                else if(math[m+1] - math[m] > pof[p+1] - pof[p])
                {
                    arrange1[i] = 'm';
                    m++;
                }
                else
                {
                    arrange1[i] = 'p';
                    p++;
                }
            else if(math[m+1] - math[m] > pof[p+1] - pof[p])
            {
                arrange1[i] = 'e';
                e++;
            }
            else if(eng[e+1] - eng[e] > pof[p+1] - pof[p])
            {
                arrange1[i] = 'e';
                e++;
            }
            else
            {
                arrange1[i] = 'p';
                p++;
            }
        }
    }

    printf("第一问答案：\n");
    printf("其中数学需要复习%d周，外语需要复习%d周，专业课需要复习%d周\n", m, e, p);
    printf("具体安排参考(m代表数学课，e代表英语课，p代表专业课)：\n");
    for(i=0; i<11; i++)
        printf("%4c", arrange1[i]);
    printf("\n预计最高得分为：%d+%d+%d=%d\n\n", math[m], eng[e], pof[p], math[m]+eng[e]+pof[p]);

    for(i = m = e = p = 0; i < 11; i++)
    {
        while(math[m] < 60 && i < 11)
        {
            arrange2[i] = 'm';
            m++;
            i++;
        }
        while(eng[e] < 60 && i < 11)
        {
            arrange2[i] = 'e';
            e++;
            i++;
        }
        while(pof[p] < 60 &&i < 11)
        {
            arrange2[i] = 'p';
            p++;
            i++;
        }
        if(m<11 && e<11 && p<11)
        {
            if(math[m+1] - math[m] > eng[e+1] - eng[e])
                if(eng[e+1] - eng[e] > pof[p+1] - pof[p])
                {
                    arrange2[i] = 'm';
                    m++;
                }
                else if(math[m+1] - math[m] > pof[p+1] - pof[p])
                {
                    arrange2[i] = 'm';
                    m++;
                }
                else
                {
                    arrange2[i] = 'p';
                    p++;
                }
            else if(math[m+1] - math[m] > pof[p+1] - pof[p])
            {
                arrange2[i] = 'e';
                e++;
            }
            else if(eng[e+1] - eng[e] > pof[p+1] - pof[p])
            {
                arrange2[i] = 'e';
                e++;
            }
            else
            {
                arrange2[i] = 'p';
                p++;
            }
        }

    }

    printf("第二问答案：\n");
    printf("其中数学需要复习%d周，外语需要复习%d周，专业课需要复习%d周\n", m, e, p);
    printf("具体安排参考(m代表数学课，e代表英语课，p代表专业课)：\n");
    for(i=0; i<11; i++)
        printf("%4c", arrange2[i]);
    printf("\n预计最高得分为：%d+%d+%d=%d\n", math[m], eng[e], pof[p], math[m]+eng[e]+pof[p]);

}