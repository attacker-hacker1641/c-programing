#include<stdio.h>
#include<unistd.h>
int foo();
int a = 10; //global variable 

int foo() //fuction 
{
    int v=30;
    printf("the value of a in [foo]: %d\n",a);
    a = a*6;
    v = v * 30;
    return v;
}



int main()
{
    int v = 89;
    int c = 45;
    int d = 55;
    int x = 88;
    int t = 77;
    static int h = 76;
    float u = foo();
    float p = foo() + 1;

if (1)
{
    int a=19;
    printf("the address of a in parrent is : %p\n",&a);

}

    printf("the value of a in [Main]: %d\n",a);
    printf("the process is running with pid: %d\n",getpid());
    printf("the address of v is : %p\n",&v);
    printf("the address of c is : %p\n",&c);
    printf("the address of x is : %p\n",&x);
    printf("the address of d is : %p\n",&d);
    printf("the address of t is : %p\n",&t);
    printf("the address of u is : %p\n",&u);
    printf("the address of static int h is : %p\n",&h);
    int *m = &h -0x14;
    //*m = 30;
    //&h + 0x14;
    printf("the address of m is : %p\n",m);

    return x;


  
    
}