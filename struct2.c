#include<stdio.h>
struct details
{
    int num;
    char name[15];
};

int main()
{   
        int num;
        struct details de;
        printf("Enter Token number and name:");
        scanf("%d %s",&de.num,&de.name);
        printf("Token number:%d\n your name is:%s\n",de.num,de.name);
}