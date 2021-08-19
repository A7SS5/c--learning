#include<stdio.h>
int main()
{
    const int b=10;
    int *s=&b;
    *s=3;
    printf("%d",*s);
    return 0;
}
//我们无法直接修改一个const变量，但我们可以通过指针来修改
//此时编译器会警告我们，但不是一个错误