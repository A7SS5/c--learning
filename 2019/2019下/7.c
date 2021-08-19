#include<stdio.h>
int main()
{
    char x=-2,y=3;
    char t=(++x) | (y++); // |一个为1就为1，否则为0，前缀++在这次运算使用的是加后的值，后缀用的是加前的值，即-1|3=-1
    printf("x=%d,y=%d,t=%d\n",x,y,t);
    t=(++x)||(y++); //||为逻辑或运算，当左边为真时不会计算右边
    printf("x=%d,y=%d,t=%d\n",x,y,t);
    return 0;
}