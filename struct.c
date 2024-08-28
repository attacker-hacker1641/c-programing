#include<stdio.h>
struct Employee
{
    int eid;
    char name[20];
    int exp;
};
int main()
{
    struct  Employee e;
    printf("enter the details(id, name, expression) of an employee:");
    scanf("%d%s%d",&e.eid,&e.name,&e.exp);
    printf("Your details\n");
    printf("id:%d\n Name:%s\n Experience:%d\n",e.eid,e.name,e.exp);
}