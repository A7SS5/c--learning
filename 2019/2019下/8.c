#include<stdio.h>
#define X a+b
int main()
{
    int a=1,b=1;
    printf("%d\n",X*X); //define在预处理阶段是直接替换的，即替换后为a+b*a+b所以结果为3
    return 0;
}