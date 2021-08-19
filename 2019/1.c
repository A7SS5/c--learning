#include<stdio.h>
struct A{
    long a;
    int b;
};
int main()
{
    struct A num={0x6e694c756f796978,0x7875};
 // a 和 b转换成二进制
 // b 01111000 01110101
 // a 01101110 01101001 01001100 01110101 01101111 01111001 01101001 01111000
//转换为ascii字符即为xuniluoyix 
//因电脑中以小端方法存储且从低地址开始读所以读出来相反
    char ch='0';
    for (int i=0;ch;i++)
    {
        ch=*((char*)&num+i); //char占用一个字节，即以此读一个字节的内容
        printf("%c",ch);
    }
    printf("\n");
    return 0;
    
}