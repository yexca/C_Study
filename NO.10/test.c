#include <stdio.h>
#define AIM 200

int main(void)
{
    int xinghui = 0;
    int jiuchanzhiyuan = 0;
    int aim_chou = 0;

    while (aim_chou < AIM)
    {
        jiuchanzhiyuan++;
        if (jiuchanzhiyuan % 90 == 0)
            xinghui += 10;
        else if (jiuchanzhiyuan % 10 == 0)
            xinghui += 2;
        if (xinghui >= 5)
        {
            aim_chou += xinghui / 5;
            xinghui %= 5;
        }
        aim_chou++;
    }

    printf("要达到%d抽，至多需要%d纠缠之缘\n", AIM, jiuchanzhiyuan);

    return 0;
}