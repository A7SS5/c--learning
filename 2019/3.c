#include<stdio.h>
struct node
{
    char a;
    int b;
    short c;
};
struct n
{
    char a;
    int b;
};
//由内存对齐原则(参照18年11题)可算出node和n分别占12和8字节
int main()
{
    struct node a[2]={{1,2,3},{4,5,6}};
    printf("a:%c b:%d c:%hd\n",a[0].a,a[0].b,a[0].c);
     printf("a:%c b:%d c:%hd\n",a[1].a,a[1].b,a[1].c);
    *(int *)((char*)a+2*sizeof(struct n))=100;
        printf("a:%c b:%d c:%hd\n",a[0].a,a[0].b,a[0].c);
     printf("a:%c b:%d c:%hd\n",a[1].a,a[1].b,a[1].c);
    return 0;
  //  我们将 *(int *)((char*)a+2*sizeof(struct n))=100拆开看
  //2*sizeof(struct n)即16字节
  //(char*)a+2*sizeof(struct n)，a代表结构体首元素的地址，将他强制转换成char*类型，则+1后是加一个sizeof(char)即1字节，而此处加16个
  //结构体数组a一共占24个字节，而第16字节正好是第二个结构体的b的所在，正好修改了a[1].b
}

