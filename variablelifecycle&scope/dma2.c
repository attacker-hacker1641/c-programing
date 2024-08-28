#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i,n;
    printf("enter no of inputs:");
    scanf("%d",&n);
    p = (int *)malloc(sizeof(int)*n);
    printf("Enter the input values:\n");
    for(i=0;i<n;i++)
        scanf("%d",p[i]);
    printf("The value of array in p:\n");
    for(i=0;i<n;i++)
        printf("p[%d] == %d\n",i,p[i]);
}
