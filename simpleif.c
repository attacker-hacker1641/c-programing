#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if (number<0)
    {
            printf("Given number is a -ve number!\n");
    }
    printf("the given input is :%d\n",number);

}