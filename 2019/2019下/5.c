#include<stdio.h>
int main()
{
    printf("%d\n",printf("Xiyou Linux Group2%d",printf("")));
    return 0;
}
//嵌套循环执行时,先是外层循环进入内层循环,并在内层循环终止之后,接着执行外层循环 再由外层循环进入内层循环中,当外层循环全部终止时,程序结束.
//printf返回值为输出字符个数
//在本题中，第一层为 printf("%d\n",printf("Xiyou Linux Group2%d",printf("")));
//第二层为printf("Xiyou Linux Group2%d",printf(""))
//第三层为printf("")
//输出正好相反，先输出空，取得返回值0
//再输出Xiyou Linux Group2%d,并将返回值填入%d处，取得返回值19
//再输出%d,即19