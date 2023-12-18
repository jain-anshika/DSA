// Write a program in C to print the Fibonacci Series using recursion.  
#include<stdio.h>
int fibbo(int n1,int n2);
int main()
{
    int p1=0,p2=1;
    printf("Fibonacci series: %d %d",p1,p2);
    fibbo(p1,p2);
}

int fibbo(int n1,int n2)
{
    int n3=n1+n2;
    if(n3>55)
    {
        return 0;
    }
    printf(" %d",n3);
    fibbo(n2,n3);
    
}