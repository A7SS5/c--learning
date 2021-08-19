#include<stdio.h>
static int a=2018;
static void fun(void)
{
    static int b;
    printf("a=%d,b=%d\n",a++,++b);
}
int main()
{
    fun();
   fun();
   fun();
   return 0;
}
//静态局部变量使用static修饰符定义，即使在声明时未赋初值，编译器也会把它初始化为0。且静态局部变量存储于进程的全局数据区，即使函数返回，它的值也会保持不变。
//静态全局变量仅对当前文件可见，其他文件不可访问，其他文件可以定义与其同名的变量，两者互不影响。
//静态函数只能在声明它的文件中可见，其他文件不能引用该函数