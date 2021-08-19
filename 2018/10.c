#include<stdio.h>
#define YEAR 2018
#define LEVELONE(x) "XiyouLinux "#x"\n"
#define LEVELTWO(x) LEVELONE(x)
#define MULTIPLY(x,y) x*y
int main()
{
    int x=MULTIPLY(1+2,3);
    printf("%d\n",x);
    printf(LEVELONE(YEAR));// #  将右边的参数做整体的字符串替换，即便是另一个宏，也不展开，仍然作为字符串字面信息输出。
    printf(LEVELTWO(YEAR));// LEVELTWO为非#宏,则先整体代换即LEVELONE(2018)

}