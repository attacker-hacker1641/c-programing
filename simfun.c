#include<stdio.h>
int add(int,int);
int main()
{   
    int a,b,c;
    printf("Enter two values:");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("Add of A and B:%d\n",c);
}
int add(int x,int y)
{
    return x+y;
}