#include<stdio.h>
int main()
{
    int m1[2][2],m2[2][2],m3[2][2];
    int i,j;
    printf("enter the details for 2x2:");
     printf("enter the value for m1:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            scanf("%d",&m1[i][j]);
    }
     printf("enter the value for m2:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            scanf("%d",&m2[i][j]);
    }
    printf("the addition of matrix m1 and m2\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        m3[i][j] = m1[i][j] + m2[i][j];
        printf("m3[%d][%d] = %d\n",i,j,m3[i][j]);
    }
    return 0;
}