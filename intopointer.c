#include<stdio.h>
int main()
{
    int i= 341;
    float f = 3.7;
    char c = 'a';
    printf("int i has %d stored in address :%p\n",i,&i);
    printf("float f has %f stored in address :%p\n",f,&f);
    printf("char c has %c stored in address :%p\n",c,&c);
    
}