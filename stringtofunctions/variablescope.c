#include<stdio.h>
int main()
{
    int x=10;
    printf("x= %d\n",x);
    {
        int x=8;
        printf("x from inner block = %d\n",x);

    }
    x =x +1;
    printf("x =x+1 after the loop: %d\n",x);
}
