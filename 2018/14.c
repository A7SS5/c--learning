#include<stdio.h>
int convert(const char* num)
{
    
    int realnum=0;
    int sign=1;
    int i=0;
    if (num[0]=='-')
    {
        i++;
        sign*=-1;
    }
    while(num[i]!='\0')
    {
        realnum=realnum*10+num[i]-'0';
        ++i;
    }
    if (i==0)
    return 0;
    return sign*realnum;
}
int main()
{
    printf("%d",convert("-0"));
}