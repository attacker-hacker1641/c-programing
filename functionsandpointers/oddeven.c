#include<stdio.h>
int oddeven(int num); //prototyping
int oddeven(int num){
    if(num%2 == 0){
        return 1;
    }
    else if (num%2 ==1)
    {
        return 0;
    }
    
}
int main ()
{
    int num;
    while (1)
    {
    printf("Enter a number(press 0 to quit):");
    scanf("%d",&num);
    if( num ==0)
    {
        break;
    }
    if(oddeven(num)){
        printf("the given number is an even number\n");
    }
    else{
        printf("the given number is an odd number\n");
    }

    }
   
}
