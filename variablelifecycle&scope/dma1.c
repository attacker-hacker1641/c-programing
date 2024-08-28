#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i,n;
    printf("Enter number of inputs:");
    scanf("%d",&n);
    p = (int *)malloc(sizeof(int)*n);
    printf("enter the inputs:\n");
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    printf("the value in array p: \n");
    for(i=0;i<n;i++)
        printf("p[%d] = %d\n",i,p[i]);
}