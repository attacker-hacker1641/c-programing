#include<stdlib.h>
#include<stdio.h>
struct A{
    int x;
    double y;
};

union B{
    int x;
    double y;
};

int main()
{   
    struct A a;
    union B b;
      printf("size of struct A is :%ld\n",sizeof(a));
      printf("size of union B =%ld\n",sizeof(b));
}

