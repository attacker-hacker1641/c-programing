#include<stdio.h>
#include<string.h>
int main()
{ 
    char a[10];
    char b[10];
    printf("Enter a string:");
    scanf("%s",&a);
    strcpy(b,a);
    printf("string copy :%s\n",b);

}