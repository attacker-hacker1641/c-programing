#include<stdio.h>
int main()
{
    int num1;
    printf("enter the input:");
    scanf("%d",&num1);
    if (num1>=0)
    {
        if (num1<10)
            printf("number with 0..9\n");
        else
            printf("not with in  0..9\n");
    }
    else
        printf("Number is -ve\n");
        printf("\n");
}   