#include<stdio.h>
int main()
{
    //C语言中数组按行优先顺序存储，nums相当于二维数组的首元素的地址
    int nums[3][3]={1,2,3,4,5,6,7,8,9};
    printf("%p\n",nums[1][-2]);  //相当于*(nums+1*3-2) 即第二个元素
    printf("%p\n",(-1)[nums][5]); //相当于*(nums+(-1)*3+5) 即第三个元素
    printf("%p\n",-1[nums][5]);  //相当于*(nums+1*3+5)即第九个元素取负数
 

}