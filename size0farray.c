#include<stdio.h>
int main()
{
    char ki = {'k','i','s','h','o','r','e'};
    for(int i=0; i<sizeof(ki); i++)
    {
        printf("thesizeof[%d] stored at : %p\n" ,i, &sizeof(i));
    }
}