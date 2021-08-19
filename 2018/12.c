#include<stdio.h>
int main()
{
    FILE*fp=fopen("Linux.txt","wb");
    long long a=0x78756e694c; 
    printf("%lld",a);
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
    return 0;
    //longlong值为517366245708，转成二进制为00000000 00000000 00000000 01111000 01110101 01101110 01101001 01001100
    //                                                                     x         u         n         i       L
    //内存是以小端的方式存储在电脑上，即低地址存低位，高地址存高位，fwrite以二进制形式将longlong写入，也是从地位写起，即先写01001100这个字节，对应L这个字母
}