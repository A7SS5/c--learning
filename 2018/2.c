#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a[3][2]={2,0,1,8};
    char *str=(char *)malloc(sizeof(char)*20);
    strcpy(str,"\0101\\xb2"); //将str打印出来是"1\xb2",用\加二进制数也可以表示字符，且在字符串中只能用两个\\来表示一个\
    printf("%s\n",str);
    printf("%zu\n",sizeof(a)); //sizeof求的是元素所占内存大小,一个int占四个字节,故24字节
    printf("%zu %d\n",sizeof(a[1][1]=0),a[1][1]);
    printf("%zu %zu",sizeof(char *),strlen(str)); //sizeof(char*)求的是char型指针所占内存，而strlen求的是字符串加上末尾空字符的长度。
}