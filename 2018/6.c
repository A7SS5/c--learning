#include<stdio.h>
int main()
{
    int a[5];
    printf("%p\n",a);
    printf("%p\n",a+1);
    printf("%p\n",&a);
    printf("%p\n",&a+1);

}
//数组名同时代表数组首元素的地址,数组名+1就是加一个元素的地址即a[1]的地址
//对数组取地址的结果与数组名取得地址相同，因为它们首地址相同，但&a是对整个数组求地址，一个元素变成了一个数组，所以对&a+1则是加一个数组长度的地址