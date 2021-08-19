#include<stdio.h>
int main()
{
  //  int a1=1,b1=2;
    int a=1,b=2;
    /*(1)*/int c=a;a=b;b=c; //利用中间值交换
     /*(2)*/a=a-b;b=b+a;a=b-a; //a=a1-b1,b=b1+a=b1+a1-b1=a1,a=a1-(a1-b1)=b1; 
      /*(3)*/a=a^b;b=b^a;a=a^b; //a=a1^b1;b=b1^a=b1^a1^b1=a1;a=a1^b1^b=a1^b1^b1=a1; 利用相同两数求^值为1
      
}