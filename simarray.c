#include<stdio.h>
int main()
{
    int a[10];
    int n,sum=0;
    printf("enter the no of inputs:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter a value:");
        scanf("%d",&a[i]);
        sum= sum + a[i];
    }
     printf("value of sum :%d\n",sum);
}