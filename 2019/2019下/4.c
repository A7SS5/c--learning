#include<stdio.h>
void f()
{
    static int a=0; //a为静态局部变量，改变了a的生存域，只有当程序结束时才销毁，且只在第一次进入函数时进行初始化
    int b=0;  //b为自动变量，当函数结束时自动销毁
    printf("%d, %d\n",++a,++b);
  
}
int main()
{
    f();
    f();  
}