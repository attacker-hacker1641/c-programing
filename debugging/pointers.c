#include<stdio.h>
int main()
{
    int i =10;
    int *j = &i;
    printf("the value of i is : %d\n",i);
    printf("the address of i is : %p\n",&i);
    printf("the value of j is : %p \n",j);
    printf("the value of *j is : %d\n",*j);
    printf("the address of j is : %p\n",&j);
    printf("........................\n");
    i=78;
    printf("the value of i is : %d\n",i);
    printf("the address of i is : %p\n",&i);
    printf("the value of j is : %p \n",j);
    printf("the value of *j is : %d\n",*j);
    printf("the address of j is : %p\n",&j);
    *j =90;
    printf("the value of i is : %d\n",i);
    printf("the address of i is : %p\n",&i);
    printf("the value of j is : %p \n",j);
    printf("the value of *j is : %d\n",*j);
    printf("the address of j is : %p\n",&j);
}
    
    
    
    
    
    
    
    