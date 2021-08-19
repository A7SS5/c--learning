#include<stdio.h>
int main()
{
    int a[4]={2,0,1,9};
    printf("%p,%p\n",a,&a); //数组名也代表这数组首元素的地址，即两个相同地址是相同的
    printf("%p,%p\n",a+1,&a+1); //a+1即第一个元素的地址，&a+1时，&a时一个元素变成数组整体故加1是加一个具有四个int行元素的数组的地址
    return 0;
}