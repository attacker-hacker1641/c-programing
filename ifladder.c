#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    if(num1==num2)
        printf("both number are equal");
    else if(num1>num2)
        printf("num1 is greater than num2");
    else
        printf("num2 is greater than  num1");
    
}