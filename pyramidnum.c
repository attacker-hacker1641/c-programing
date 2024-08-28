#include<stdio.h>
int main()
{   int num;
    int i;
    printf("Pyramid Limit:");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    printf("%d\n",i);
    for (int j=1; j<=i; j++)
    {
        printf("%d\n",j);
    }

    
}