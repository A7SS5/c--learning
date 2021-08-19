#include<stdio.h>
int main()
{
    char n[]={1,0,0,0};
    printf("%d\n",*(int *)n);
    return 0;
} //数组名也代表数组首元素的地址，将他强制转化成int型指针再解引用就是第一个元素