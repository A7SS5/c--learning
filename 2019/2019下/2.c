#include<stdio.h>
int main()
{
    for (unsigned int i=3;i>=0;i--) //unsigned int为无符号数，即i>=0永远为真，故一直输出'='
    {
        putchar('=');
    }
    return 0;
}