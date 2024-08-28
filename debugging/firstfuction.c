#include<stdio.h>
int add(int a, int b);
int main()
{
    printf("addition : %d\n",add(1,8));
}

int add(int a, int b)
{
    int c = a+b;
    return c;
}