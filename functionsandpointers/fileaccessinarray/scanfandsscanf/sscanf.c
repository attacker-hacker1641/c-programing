#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[]="3 red balls 2 blue balls";
    char str1[10],str2[20];
    int num,num2;
    sscanf(s,"%d %s %s %d",&num,str1,str2,&num2);
    printf("No : %d\n",num);
    printf("STR: %s\n",str1);
    printf("STR2: %s\n",str2);
    printf("num2: %d\n",num2);

}
