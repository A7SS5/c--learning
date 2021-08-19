#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *p=(char *)malloc(sizeof(char)*20);
    char *q=p; //q指向p
    scanf("%s %s",p,q); //先对P赋值，再对q赋值，但q指向p,所以再次对q赋值以覆盖上次的赋值
    printf("%s %s\n",p,q); //所以这里相当于输出了两边p
    return 0;

}