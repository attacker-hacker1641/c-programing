#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *source, *destination;
    char ch;
    source = fopen("fprint.c","r");
    destination = fopen("fcopy.c","w");
    if(!source)
        printf("Source doesnot exist\n");
    else
    {
        while((ch=fgetc(source))!=EOF)
            fputc(ch,destination);
        fclose(source);
        fclose(destination);
    }
    printf("THE FILE IS COPIED !\n");
}