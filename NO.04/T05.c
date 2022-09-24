#include <stdio.h>

int main(void)
{
    float speed, file;

    printf("请输入速度大小和文件大小\n");
    scanf("%f %f", &speed, &file);
    printf("在%.2fMb/s的速度下，下载一个%.2fMB的文件需要大概%.2f秒", speed, file, file / speed);

    return 0;
}