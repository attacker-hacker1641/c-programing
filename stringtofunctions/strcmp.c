#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[10];
    char b[10];
    char c='k','i','s','s';
    int i;
    int sum=0;
    printf("enter a string:");
    scanf("%d",&a);
    printf("the string length of the given string is:%d\n",strlen(a));
    strcpy(b,a);
    printf("the strcopy functions:%s\n",b);
    sum == strcmp(a,c);
    if(sum==0)
        printf("Two strings are same");
    else
        printf("the strings are not same");
    if(sum<0)
        printf("A is smaller string");
    else
        printf("c is smaller string");

}