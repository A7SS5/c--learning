#include<stdio.h>
int main()
{
    char c=-1; //-1的补码为11111110
    printf("%x\n",(char)c); //输出为%x即为
    printf("%x %d\n",(unsigned char)c,(unsigned char)c);
}