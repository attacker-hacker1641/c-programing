#include<stdio.h>
#include<stdlib.h>
int main()
{
    char bug[10];
    FILE *fp;
    fp = fopen("2darray.c","r");
    while(fscanf(fp,"%s",bug,sizeof(bug))!=EOF);
    printf("%s",bug);
    fclose(fp);

}