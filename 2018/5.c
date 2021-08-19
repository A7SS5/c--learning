#include<stdio.h>
int main()
{
    char y[]="XiyouLinuxGroup",x[]="2018"; //x,y是两个以'\0'结尾字符串数组
    char *const p1=y; //此const修饰p1,代表p1的值不能被改变，即不能改变指向
    const char *p2=y; //此const修饰*p2,代表不能通过解引用p2来改变其值
    p1=x; //p1不能改变指向，错
    p2=x; //p2可以改变指向，但不能通过解引用p2来改变其值
    *p1='x';//p1不能改变指向，但可以通过解引用修改指向的值
    *p2='x';//p2可以改变指向，但不能通过解引用p2来改变其值
  printf("%s\n%s\n",p1,p2);
}