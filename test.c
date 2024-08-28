#include<stdio.h>
int math(int x , int y)
{
    int z = x * y;
    return z;
}

int add(int x , int y)
{
    int z = x + y;
    printf("the value of x and y  (add):%d\n",z);
}

int div(int x , int y)
{
    int z = x / y;
    printf("the value of x and y (/) :%d\n",z);
}

int main()
{   
    int a,b;
    printf("enter the value for x and y:");
    scanf("%d %d",&a,&b);
    printf("the multiplication of x and y :%d\n",math(a,b));
    add(a,b);
    div(a,b);
}