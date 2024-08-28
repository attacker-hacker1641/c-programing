#include<stdio.h>
void function(int a[],int n)
{
    int i;
    printf("The stored elments:");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
} 
int main()
{
    int a[5],i;
    printf("Enter the elments:");
    scanf("%d",&a[i]);
    function(a,5);
}