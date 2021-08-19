#include<stdio.h>
int main()
{
    char ch=255; //ch补码为111111111超过了ch最大范围，求得原ma为10000001即-1
    int d=ch+1;//对于int来说没有超出范围所以是256
    printf("%d %d",ch,d); //
    return 0;
}