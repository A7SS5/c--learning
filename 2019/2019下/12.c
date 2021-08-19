#include<stdio.h>
void sort(int nums[],int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=i;j<n;j++)
        {
            if (nums[i]>nums[j])
            {
                int c=nums[i];
                nums[i]=nums[j];
                nums[j]=c;
            }
        }
    }
}
///这是一个排序算法
//冒泡排序有n个元素时，实际上外层只需要排n-1次
void sort1(int nums[],int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n-i+1;j++)
        {
            if (nums[i]>nums[j])
            {
                int c=nums[i];
                nums[i]=nums[j];
                nums[j]=c;
            }
        }
    }
}
int main()
{
    int a[10]={4,2,6,7,4,6,7,8,9,10};
    int b[10]={4,2,6,7,4,6,7,8,9,10};

    sort1(a,10);
    sort(b,10);
    for (int i=0;i<10;i++)
    printf("%d %d\n",a[i],b[i]);
}