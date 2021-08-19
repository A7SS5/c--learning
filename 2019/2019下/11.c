#include<stdio.h>
int fab(int x)
{
    if (x==1 || x==2)
    return 1;
    return fab(x-1)+fab(x-2);
}
int main()
{
    printf("%d\n",fab(7));
}