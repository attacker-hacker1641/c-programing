#include<stdio.h>
int main()
{
    int a[3][2];
    int i,j;
    printf("Enter the details 3x2:");
    //nested loops 
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
    }
    printf("The given elements are :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        printf("a[%d][%d] = %d\t",i,j,a[i][j]);
        printf("\n");
    }
}