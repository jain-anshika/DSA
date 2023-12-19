// Write a program in C to check if a number is a prime number or not using recursion.
#include<stdio.h>
int prime(int n);

int main()
{
    int num;
    printf("Enter the number you want to check: ");
    scanf("%d",&num);
    if(num==1)
    {
        printf("neither prime nor non prime.");
    }
    if(prime(num)==0)
    {
        printf("%d is a prime number", num);
    }
    else printf("%d is not a prime number",num);
}

int prime(int n)
{
    if(n==2)
    { 
        return 0;
    }
    static int a=2,c=0;
    if(n%a==0)
    {
       c++;
    }
    else
    {
        a++;
        prime(n);  
    }
    return c;
}