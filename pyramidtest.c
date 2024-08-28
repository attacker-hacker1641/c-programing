#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("enter a number:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i=i+1){
        for(j=1;j<=i;j=j+1){
            printf("%d",j);
        }
        printf("\n");
        
    }
}