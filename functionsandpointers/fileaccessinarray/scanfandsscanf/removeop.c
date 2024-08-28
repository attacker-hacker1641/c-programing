#include<stdio.h>
#include<stdlib.h>
int main()
{
    int re;
    re = remove("mydata.txt");
    if(!re)
    {
        printf("File is not deleted");
    }
    else
    {
        printf("File is delted")
    }
}