#include<stdio.h>
int main()
{
    int age,choice;
    printf("1.Senior\n 2.Normal Age\n 3.Child\n 4.Exit\n");
     printf("Enter your age:");
     scanf("%d",&age);
     
     if(age>=60)
        choice=1;
    else if(age>=18 && age<60)
        choice=2;
    else if(age<=3 && age<=18) 
        choice=3;
    //printf("Enter your choice:");
    //scanf("%d",&choice);
    switch (choice)
    {
        case 1: 
               printf("Ticket Book with Concession\n");    
                break;
        case 2:
            printf("Normal Ticket Booking\n");
            break;
         case 3:
            printf("Ticket fair for childers\n");
            break;
        default:
            printf("no need for babies\n");
            break;
    }  
}