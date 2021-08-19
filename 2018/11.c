#include<stdio.h>
struct icd
{
    int a;char b;double c;
};
struct cdi
{
    char b;double c;int a;
};
int main()
{
    printf("%zu %zu\n",sizeof(struct icd),sizeof(struct  cdi));
    return 0;
}
//1.最宽基本数据类型大小的整数倍
//2.结构体中元素是按照定义顺序一个一个放到内存中去的，但并不是紧密排列的。从结构体存储的首地址开始，每一个元素放置到内存中时，它都会认为内存是以它自己的大小来划分的，因此元素放置的位置一定会在自己宽度的整数倍上开始。