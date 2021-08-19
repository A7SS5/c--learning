#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct a
{
    char *name;
    int num;
} A;

void func(A *a) //第二处错误，此函数没有返回值，且将指针值传递进函数，当我们使用malloc后将分配后的内存地址存储在函数中的a中，但函数中的a只是局部变量，函数返回后就消失了，无法在主函数中访问这段内存
{
    a=(A*)malloc(sizeof(A));
    strcpy(a->name,"XiyouLinuxGroup"); //第一处错误，未该a->name分配内存就直接使用
    a->num=2018;
     
}

//修改后 有两种方法，第一种是将二维指针传递进函数，通过解引用二维指针来修改该指针指向的指针所存储的地址
/*第二种是函数返回分配内存后的指针并在主函数中存储，以此来访问分配的内存，此处使用第二种方法
A* func(A *a)
{
    a=(A*)malloc(sizeof(A));
    a->name=(char *)malloc(sizeof(char)*17);
    strcpy(a->name,"XiyouLinuxGroup");
    a->num=2018;
     printf("%s %d\n",a->name,a->num);
     return a;
}
*/
int main()
{
    A *a;
    func(a); 
 //   a=fun(a);
    printf("%s %d",a->name,a->num);
    free(a);
    return 0;
}
//有两处错误