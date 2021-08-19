#include<stdio.h>
int f(unsigned int num)
{  int i;
    for (i=0;num;i++)
    {
        num&=(num-1);
        printf("num=%d\n",num);
    }
    return i;
} //
int main()
{
    printf("%d",f(2018));
}
//num的最低位（最右边）的1被翻转，直至num为0。