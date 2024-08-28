#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ki;
    char ch;
    ki = fopen("test.txt","w");
    printf("Enter your content:");
    while(1)
    {
        scanf("%c",&ch);
        if(ch!='Q')
            fputc(ch,ki);
        else
            break;
    }
}