#include<stdio.h>
int main()
{
    int val=2018; //声明val并初始化
    int *pi=2019; //声明pi并初始化，但此处pi值应为int型的地址
    pi=&val; //对pi赋与val的地址
    *pi=0; //通过解引用pi,访问pi所指的对象
    return 0;
}