#include<stdio.h>
#define f(a,b) a##b //##会连接两个参数,以字符的形式
#define g(a) #a //#会将右侧以字符串形式展开，无论右侧对象是不是宏
#define h(a) g(a)
int main()
{
    printf("%s\n",h(f(a,2)));
    printf("%s\n",g(f(1,2)));
    return 0;
}