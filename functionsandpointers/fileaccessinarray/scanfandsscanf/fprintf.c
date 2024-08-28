#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int i,n=2;
    char c='x',c1='=';
    fp = fopen("fprint.dat","w");
    for(i=1;i<20;i++)
    {
        fprintf(fp,"%d %c %d %c %d\n",i,c,n,c1,i*n);
    }
    fclose(fp);
}