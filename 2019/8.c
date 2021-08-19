#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*void func(char *p)
{
    p=(char*)malloc(sizeof(char));
}
*/
//修改后，在函数内分配内存，并将分配的地址通过解引用一次二级指针来修改一级指针的地址
void func(char **p)
{
    *p=(char*)malloc(sizeof(char));
}
int main()
{
    char *s=NULL;
    func(&s);
    strcpy(s,"I love xiyou_linux");
    puts(s);
    return 0;
    
}
//同18年一题，p以值传递形式传入func;在函数中的P为局部变量，退出后p再次成为空指针，无法使用函数中分配的内存9