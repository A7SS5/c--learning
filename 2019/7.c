#include<stdio.h>
#include<string.h>
char *convert(char *a,int size)
{
    char temp[256][256];
    int i=0;
    int j=0;
    int k=0;
    for(i=0;i<size;i++)
    {
        
        if (j==0&&a[i]==' '&&k==0)
        continue;
        if (a[i]==' '&&k==0)
        continue;
        if (a[i]==' ')
        {
            temp[j][k]=' ';
            temp[j][k+1]='\0';
            printf("temp[j]:%s\n",temp[j]);
            k=0;j++;
            continue;
        }
        temp[j][k++]=a[i];
        
    }
    for(i=j-1;i>=0;i--)
    {
        printf("%s",temp[i]);
    }
    return NULL;
}
int main()
{   char a[]={"    hello  everyone, we are xiyoulinux "};
    convert(a,strlen(a));
}