#include<stdio.h>
#include<string.h>
void func(char *a)
{
    printf("%lu\n",sizeof(a)); //此时传入函数的是指针，所以大小为8
      printf("%lu\n",strlen(a));
}
int main()
{
    char a[]="hello world";
     char *b="hello world";
     printf("%s",b);
     func(a);
    printf("%lu\n",sizeof(a)); 
      printf("%lu\n",strlen(a));
      return 0; 
}
//字符串数组中存储时末尾有占据一个字节的'\0'来代表字符串的结尾
//sizeof是一个关键字，计算而是实际占有的字节数，
//strlen是一个库函数,计算的是字符串的实际长度