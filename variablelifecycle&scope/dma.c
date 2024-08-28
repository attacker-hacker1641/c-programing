#include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("the value of array :\n");
    for(i=0;i<10;i++)
        printf("a[%d] = %d\n",i,a[i]);
        printf("memory of a :%ld\n",sizeof(a));
}